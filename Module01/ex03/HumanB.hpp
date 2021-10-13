#ifndef HUMANB_09_HPP
#define HUMANB_09_HPP

#include "Weapon.hpp"
#include <string>

class HumanB {

	private:
		std::string _name;
		Weapon *_weapon;
	public:
		HumanB(void);
		HumanB(std::string);
		HumanB(std::string, Weapon *);
		~HumanB(void);
		void	attack(void);
		void	setWeapon(Weapon &);
};

#endif
