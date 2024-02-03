#include "HumanA.hpp"

void HumanA::attack(void){
    std::cout << this->_name << " attacks with their " << _weapon.getType() << std::endl;
}