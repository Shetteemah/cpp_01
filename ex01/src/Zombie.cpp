# include "../include/Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << _id << " from " << this->_name << ":\t[Died!]" << std::endl;
}

void Zombie::announce() const
{
    std::cout << "Zombie " << _id << " from " << this->_name << ":\tBraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setId(int id) // implementation of the added method to set _id
{
    _id = id;
}

void Zombie::setName(std::string name)
{
    this->_name = name;
}
