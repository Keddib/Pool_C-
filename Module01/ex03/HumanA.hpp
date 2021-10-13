#ifndef HUMANA_09_HPP
#define HUMANA_09_HPP

#include "Weapon.hpp"
#include <string>

class HumanA {

	private:
		std::string _name;
		Weapon &_weapon;
	public:
		HumanA(std::string, Weapon &w);
		~HumanA(void);
		void attack(void);
};

#endif
