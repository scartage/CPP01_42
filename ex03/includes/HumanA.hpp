#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
    /* data */
    std::string _name;
    Weapon& _weapon;
public:
    HumanA(std::string name, Weapon& weapon) : _name(name) , _weapon(weapon) {};
    ~HumanA() {};
    void attack();
};

#endif