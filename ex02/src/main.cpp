#include <iostream>

int main(void){
    std::string text = "HIT THIS BRAIN";
    std::string* stringPTR = &text;
    std::string& stringREF = text;

    std::cout << "- memory part - " << std::endl;
    std::cout << "memory address of string: " << &text << std::endl;
    std::cout << "memory address held on stringPTR: " << stringPTR << std::endl;
    std::cout << "memory address held on stringREF: " << &stringREF << std::endl;

    std::cout << std::endl;

    std::cout << "- value part - " << std::endl;
    std::cout << "value of string: " << text << std::endl;
    std::cout << "value held on stringPTR: " << *stringPTR << std::endl;
    std::cout << "value held on stringREF: " << stringREF << std::endl;

    return 0;

}