#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"

class HumanB
{
private:
    std::string _name;
    Weapon* _weapon;
public:
    HumanB(std::string name) : _name(name), _weapon(NULL){};
    ~HumanB() {};
    void attack();
    void setWeapon(Weapon& weapon);
};

#endif