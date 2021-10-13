#ifndef WEAPON_09_HPP
#define WEAPON_09_HPP

#include <string>

class Weapon {

	private:
		std::string _wType;
	public:
		Weapon(void);
		Weapon(std::string);
		~Weapon(void);
		void setType(std::string);
		const std::string &getType(void) const;
};

#endif
