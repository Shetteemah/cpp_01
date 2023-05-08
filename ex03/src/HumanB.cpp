#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB(const std::string& name) : _name(name), _weapon(nullptr) {}

void HumanB::attack() const
{
    std::cout << _name << " attacks";
    if (_weapon != nullptr) {
        std::cout << " with their " << _weapon->getType();
    }
    std::cout << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
    _weapon = &weapon;
}
