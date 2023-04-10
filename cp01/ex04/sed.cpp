
#include "sed.hpp"

sed::sed() {}

sed::~sed() {}

int sed::openFile(std::string filename) {
    inputFileStream.open(filename);
    if (!inputFileStream) {
        std::cerr << "ERROR: Could not open file < " << filename << " >" << std::endl;
        return 0;
    }
    this->fileName = filename;
    std::cout << "    **** Input file set to  < " << filename << " > ****" << std::endl;
    return 1;
}

int sed::replace(std::string strToReplace, std::string replacement) {
    if (strToReplace.empty() || replacement.empty()) {
        std::cerr << "ERROR: Strings can't be empty" << std::endl;
        return 1;
    }
    std::string str((std::istreambuf_iterator<char>(inputFileStream)), std::istreambuf_iterator<char>());
    for (size_t i = 0; i < str.size(); i++) {
        if (str.compare(i, strToReplace.length(), strToReplace) == 0) {
            str.replace(i, strToReplace.length(), replacement);
            i += replacement.length() - 1;
        }
    }
    return outputToFile(str);
}

int sed::outputToFile(std::string fileContent) {
    std::ofstream outputFileStream(fileName + ".replace");
    if (!outputFileStream) {
        std::cerr << "     ----ERROR: Could not create output file----" << std::endl;
        return 0;
    }
    outputFileStream << fileContent;
    std::cout << "    **** you can find modified content in this file < " << fileName << ".replace > ****" << std::endl;
    return 1;
}