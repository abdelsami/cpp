
#include"sed.hpp"

int printError(std::string errorMsg) {
    if (errorMsg != "")
        std::cerr << "Error: " << errorMsg << std::endl;
    else
        std::cerr << "Error: " << strerror(errno) << std::endl;
    
    // print usage instructions
    std::cout << "     *** USAGE ***\n\n --- give 3 arguments :---\n| First  : fileName       |" << std::endl;
    std::cout << "| Second : textToReplace  |\n| Third  : replacementText|" << std::endl;  
    return 1;
}

int main(int ac, char **av)
{
    sed s;

    if (ac == 4)
    {
        std::string fileName = av[1];
        std::string textToReplace = av[2];
        std::string replacementText = av[3];
        if (!s.openFile(fileName))
            return(printError(""));
        if(!s.replace(textToReplace, replacementText))
            return(printError(""));
        return (0);
    }
    return (printError("Invalid Input\n"));
}