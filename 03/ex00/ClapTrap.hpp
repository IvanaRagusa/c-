
#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <string>

class ClapTrap
{
    private:

        std::string _name; 
        int         _Hit;
        int         _Energy;
        int         _Attack_demage;
        
    
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ~ClapTrap();
        ClapTrap(const ClapTrap& ClapTrap);
        ClapTrap & operator=(const ClapTrap& ClapTrap);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif
