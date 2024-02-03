#include "HumanB.hpp"

void HumanB::attack(void){
    if (_weapon)
        std::cout << this->_name << " attacks with their " << _weapon->getType() << std::endl;
    else
        std::cout << this->_name << " doesn't have a weapon" << std::endl;
}

void HumanB::setWeapon(Weapon& weapon){
    this->_weapon = &weapon;
}