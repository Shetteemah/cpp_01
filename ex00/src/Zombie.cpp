#include "../include/Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
    std::cout << "An infected has turned into a " << _name << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "The " << _name << " has been killed by Ellie and Joel.\n" << std::endl;
}

void Zombie::announce()
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ...\n" << std::endl;
}
