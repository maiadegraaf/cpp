#ifndef __WEAPON_H__
#define __WEAPON_H__
#include <string>
#include <iostream>
#include <iomanip>
#include <limits>
#include <stdlib.h>
using namespace std;

class Weapon
{
private:
	string	type;
public:
	const string& getType() {return type;};
	void setType(string newType) {type = newType;};
};

#endif // __WEAPON_H__