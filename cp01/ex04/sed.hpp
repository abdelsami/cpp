
#ifndef SED_HPP
#define SED_HPP

#include <string>
#include <iostream>
#include <fstream>

class sed
{
    private:
        std::string		strToReplace;
	    std::string		replacement;
	    std::string		fileName;
	    std::ifstream	inputFileStream;
    public:
        sed();
        ~sed();
        int     openFile(std::string newFile);
    	int	    replace(std::string stringToReplace, std::string replacement);
    	int	outputToFile(std::string fileContent);
};

#endif