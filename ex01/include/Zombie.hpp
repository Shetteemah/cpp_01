#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
    public:
        Zombie();
        ~Zombie();
        void announce() const;
        void setId(int id); // added method to set _id
        void setName(std::string name);
        
    private:
        std::string _name;
        int _id;
};

Zombie *zombieHorde(int N, std::string name);

#endif
