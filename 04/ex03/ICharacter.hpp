#ifndef ICHARACTER_H
#define ICHARACTER_H
#include <iostream>
#include <string>
 
// Class definition 
class ICharacter
{
public: 
// Constructor 
	ICharacter(); 
	ICharacter( const ICharacter &rhs); 
	~ICharacter(); 
	ICharacter& operator=( const ICharacter &rhs); 
}; 
 
#endif
