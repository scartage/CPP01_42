#include "Harl.hpp"
#include <cctype>

int main(int ac, char **av){
    if (ac != 2){
        std::cerr << "Usange: ./harlFilter <level>" << std::endl;
        return 1;
    }

    std::string levelStr = av[1];
    for (size_t i = 0; i < levelStr.length(); i++){
        levelStr[i] =  std::toupper(levelStr[i]);
    }
    logLevel level = getLogLevel(levelStr);

    Harl harl;

    harl.complain(level);
    return 0;
}