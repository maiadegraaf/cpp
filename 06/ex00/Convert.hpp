#ifndef CONVERT_H
#define CONVERT_H
#include <iostream>
#include <string>
#include <cmath>
#include <float.h>

enum NumType {
	CHAR,
	INT,
	FLOAT,
	DOUBLE
};

// Class definition 
class Convert
{
private:
	NumType input;
	char c;
	bool isC;
	int i;
	bool isI;
	float f;
	bool isF;
	double d;
	bool isD;
 
public: 
// Constructor 
	Convert(); 
	Convert( const Convert &rhs); 
	~Convert(); 
	Convert& operator=( const Convert &rhs); 
//Getters 
	NumType getInput() const;
	char getC() const; 
	bool getIsC() const; 
	int getI() const; 
	bool getIsI() const; 
	float getF() const; 
	bool getIsF() const; 
	double getD() const; 
	bool getIsD() const; 
//Setters 
	void setInput(NumType input);
	void setC(char c);
	void setI(int i);
	void setF(float f);
	void setD(double d); 
	void setRest(void);
//Checkers
	int	checkAll(std::string input);
	int	checkC(std::string input);
	int	checkI(std::string input);
	int	checkF(std::string input);
	int	checkD(std::string input);
// ToString Method 
	void toString(); 
}; 

std::ostream& operator<<(std::ostream& os, const Convert& obj);

#endif
