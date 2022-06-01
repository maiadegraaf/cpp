#include "Span.hpp"
// Constructor initializes attributes to 0 by default 
Span::Span(unsigned int N)
{
	_spn.reserve(N);
}
 
Span::Span( const Span& rhs)
{
	*this = rhs;
}

Span::~Span()
{

}

Span&	Span::operator=( const Span& rhs )
{
	_spn = rhs._spn;
	return *this;
}

//Getters 
std::vector<int> Span::get_spn() { return _spn; }
 
//Setters 
void Span::addNumber(int i)
{
	if (_spn.size() == _spn.capacity())
		throw std::length_error("The container is already full.");
	_spn.push_back(i);
}

void Span::addNumbers()
{
	size_t size = _spn.capacity();
	for (size_t j = 0; j < size; j++)
	{
		if (j % 2 == 0)
			addNumber(-j);
		else
			addNumber(j);
	}
}

void Span::checkSize()
{
	if (_spn.size() < 2)
		throw std::length_error("The container is too small.");
}

int Span::shortestSpan()
{
	checkSize();
	std::vector<int> tmp = _spn;
	std::sort(tmp.begin(), tmp.end());
	std::adjacent_difference(tmp.begin(), tmp.end(), tmp.begin());
	return (*std::min_element(tmp.begin() + 1, tmp.end()));
}

int Span::longestSpan()
{
	checkSize();
	int min = *std::min_element(_spn.begin(), _spn.end());
	int max = *std::max_element(_spn.begin(), _spn.end());
	return (max - min);
}
