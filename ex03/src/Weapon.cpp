#include "Weapon.hpp"

const std::string& Weapon::getType() const{
    return _type;
}

void Weapon::setType(std::string newType){
    this->_type = newType;
}