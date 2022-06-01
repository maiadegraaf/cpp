#include "Convert.hpp"
// Constructor initializes attributes to 0 by default 
Convert::Convert()
	: c(0), isC(false), i(0), isI(false), f(0), isF(false), d(0), isD(false)
{
}
 
Convert::Convert( const Convert& rhs)
{
	*this = rhs;
}

Convert::~Convert()
{
}

Convert&	Convert::operator=( const Convert& rhs )
{
	setC(rhs.c);
	setI(rhs.i);
	setF(rhs.f);
	setD(rhs.d);
	return *this;
}

//Getters 
NumType Convert::getInput() const { return input; }
char Convert::getC() const { return c; }
bool Convert::getIsC() const { return isC; }
int Convert::getI() const { return i; }
bool Convert::getIsI() const { return isI; }
float Convert::getF() const { return f; }
bool Convert::getIsF() const { return isF; }
double Convert::getD() const { return d; }
bool Convert::getIsD() const { return isD; }

template <typename T> void convertC(T c, NumType input, Convert *basic)
{
	if (input == CHAR)
		return ;
	if (c != (int)c || c > 255 || c < 0 || !isprint(c))
		return ;
	basic->setC(static_cast<char>(c));
}

template <typename T> void convertI(T i, NumType input, Convert *basic)
{
	if (input == INT)
		return ;
	if (i > INT_MAX || i < INT_MIN)
		return ;
	basic->setI(static_cast<int>(i));
}

template <typename T> void convertF(T d, NumType input, Convert *basic)
{
	if (input == FLOAT)
		return ;
	if (d > FLT_MAX || d < -FLT_MAX)
		return ;
	basic->setF(static_cast<float>(d));
}

template <typename T> void convertD(T i, NumType input, Convert *basic)
{
	if (input == DOUBLE)
		return ;
	basic->setD(static_cast<float>(i));
}

template <typename T> void setValues(T i, NumType input, Convert *basic)
{
	convertC(i, input, basic);
	convertI(i, input, basic);
	convertF(i, input, basic);
	convertD(i, input, basic);
}

//Setters 
void Convert::setInput(NumType newInput) { input = newInput; }
void Convert::setC(char newC)
{
	c = newC;
	isC = true;
}
void Convert::setI(int newI)
{
	i = newI;
	isI = true;
}
void Convert::setF(float newF)
{
	f = newF;
	isF = true;
}
void Convert::setD(double newD)
{
	d = newD;
	isD = true;
}

void Convert::setRest(void)
{
	switch (input)
	{
	case CHAR:
		setValues(c, input, this);
		break;
	case INT:
		setValues(i, input, this);
		break;
	case FLOAT:
		setValues(f, input, this);
		break;
	case DOUBLE:
		setValues(d, input, this);
		break;
	default:
		break;
	}
}

int Convert::checkAll(std::string input)
{
	int (Convert::*checkers[])(std::string) = {
		&Convert::checkC,
		&Convert::checkI,
		&Convert::checkD,
		&Convert::checkF
	};
	for (int i = 0; i < 4; i++)
	{
		int j = (this->*checkers[i])(input);
		if (j == EXIT_SUCCESS)
			return (EXIT_SUCCESS);
		else if (j == 2)
			return (EXIT_FAILURE);
	}
	return (EXIT_FAILURE);
}

int Convert::checkC(std::string input)
{
	if (input.length() == 1 && isalpha(input[0]))
	{
		setC(input[0]);
		setInput(CHAR);
		return (EXIT_SUCCESS);
	}
	return (EXIT_FAILURE);
}

int Convert::checkI(std::string input)
{
	size_t i;
	try
	{
		long conv = std::stol(input, &i, 10);
		if (i == input.length())
		{
			std::cout << "INT" << std::endl;
			if (i == LONG_MAX || conv > INT_MAX || conv < INT_MIN)
				return(2);
			setI(conv);
			setInput(INT);
			return (EXIT_SUCCESS);
		}
	}
	catch(const std::exception& e)
	{
		return (EXIT_FAILURE);
	}
	return (EXIT_FAILURE);
}

int Convert::checkF(std::string input)
{
	size_t i;
	try
	{
		double conv = std::stod(input, &i);
		if (i == (input.length() - 1) && input[i] == 'f')
		{	
			if (conv == HUGE_VAL || conv > FLT_MAX || conv < -FLT_MAX)
				return(2);
			setF(conv);
			setInput(FLOAT);
			return (EXIT_SUCCESS);
		}
	}
	catch(const std::exception& e)
	{
		return (EXIT_FAILURE);
	}
	return (EXIT_FAILURE);
}

int Convert::checkD(std::string input)
{
	size_t i;
	try
	{
		double conv = std::stod(input, &i);
		if (i == input.length())
		{
			if (conv == HUGE_VAL)
				return (2);
			setD(conv);
			setInput(DOUBLE);
			return (EXIT_SUCCESS);
		}
	}
	catch(const std::exception& e)
	{
		return (EXIT_FAILURE);
	}
	return (EXIT_FAILURE);
}

// toString 
void Convert::toString()
{
  std::cout << "c : " << c << std::endl; 
  std::cout << "isC : " << isC << std::endl; 
  std::cout << "i : " << i << std::endl; 
  std::cout << "isI : " << isI << std::endl; 
  std::cout << "f : " << f << std::endl; 
  std::cout << "isF : " << isF << std::endl; 
  std::cout << "d : " << d << std::endl; 
  std::cout << "isD : " << isD << std::endl; 
}

std::ostream& operator<<(std::ostream& os, const Convert& obj)
{
	os << "char: ";
	if (obj.getIsC() == false && !isprint(obj.getIsC()))
		os << "Non displayable" << std::endl;
	else
		os << "\'" << obj.getC() << "\'" << std::endl;
	os << "int: ";
	if (obj.getIsI() == false)
		os << "impossible" << std::endl;
	else
		os << obj.getI() << std::endl;
	os << "float: ";
	if (obj.getIsF() == false)
		os << "impossible" << std::endl;
	else if (obj.getF() == (int)obj.getF())
		os << obj.getF() << ".0f" << std::endl;
	else
		os << obj.getF() << "f" << std::endl;
	os << "double: ";
	if (obj.getD() == (int)obj.getD())
		os << obj.getD() << ".0" << std::endl;
	else
		os << obj.getD() << std::endl;
	return os;
}

