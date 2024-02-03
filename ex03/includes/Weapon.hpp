#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon
{
private:
    std::string _type;
public:
    Weapon() : _type("none") {};
    Weapon(std::string type) : _type(type){};
    ~Weapon() {};
    const std::string& getType() const;
    void setType(std::string newType);
};

#endif