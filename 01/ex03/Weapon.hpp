#ifndef _weapon_H__
#define _weapon_H__
#include <string>
#include <iostream>
#include <iomanip>
#include <limits>
#include <stdlib.h>


class Weapon
{
private:
	std::string type;
public:
	Weapon(){type = "NONE";};
	Weapon(std::string weaponType){type = weaponType;};
	const std::string& getType() {return type;};
	void setType(std::string newType) {type = newType;};
};

#endif // _weapon_H__