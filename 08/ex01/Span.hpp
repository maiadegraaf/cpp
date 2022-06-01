#ifndef SPAN_H
#define SPAN_H
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
 
// Class definition 
class Span
{
private: 
	std::vector<int> _spn;
 
public: 
// Constructor 
	Span(unsigned int N);
	Span( const Span &rhs); 
	~Span(); 
	Span& operator=( const Span &rhs); 
//Getters 
	std::vector<int> get_spn(); 
//Setters 
	void addNumber(int i);
	void addNumbers(void);
//findSpan
	void checkSize();
	int shortestSpan();
	int longestSpan();
}; 
 
#endif
