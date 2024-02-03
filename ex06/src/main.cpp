#include "Harl.hpp"

int main(int ac, char **av){
    if (ac != 2){
        std::cerr << "Usange: ./harlFilter <level>" << std::endl;
        return 1;
    }

    std::string levelStr = av[1];
    logLevel level = getLogLevel(levelStr);

    Harl harl;

    harl.complain(level);
    return 0;
}