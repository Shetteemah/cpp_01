#include "../include/Zombie.hpp"

int main()
{
    Zombie zombie_on_stack("Stalker Zombie");
    zombie_on_stack.announce();

    Zombie	*zombie = newZombie("Clicker Zombie");
    zombie->announce();
    randomChump("Runner Zombie");
    delete zombie;


    return 0;
}
