# include "../include/Zombie.hpp"

int main()
{
    int N = 5;
    std::string name = "horde";
    Zombie *horde = zombieHorde(N, name);
    for (int i = 0; i < N; i++)
        horde[i].announce();
    std::cout << std::endl;
    delete[] horde;
    return 0;
}
