#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
	std::cout << "Randomly generated: ";
	std::srand(std::time(NULL));
	int r = rand() % 3;
	switch (r)
	{
	case 0:
		std::cout << "A" << std::endl;
		return reinterpret_cast<Base *>(new A);
		break;
	case 1:
		std::cout << "B" << std::endl;
		return reinterpret_cast<Base *>(new B);
		break;
	case 2:
		std::cout << "C" << std::endl;
		return reinterpret_cast<Base *>(new C);
		break;
	default:
		return (NULL);
		break;
	}
}

void identify(Base* p)
{
	A* a = dynamic_cast<A*>(p);
	if (a)
	{
		std::cout << "A" << std::endl;
		return ;
	}
	B* b = dynamic_cast<B*>(p);
	if (b)
	{
		std::cout << "B" << std::endl;
		return ;
	}
	C* c = dynamic_cast<C*>(p);
	if (c)
	{
		std::cout << "C" << std::endl;
		return ;
	}
	std::cout << "Unknown Type" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch(const std::exception& e)
	{
		try
		{
			B b = dynamic_cast<B&>(p);
			std::cout << "B" << std::endl;
		}
		catch(const std::exception& e)
		{
			try
			{
				C c = dynamic_cast<C&>(p);
				std::cout << "C" << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cout << "Unknown Type" << std::endl;
			}
		}
	}
	
}

int main(void)
{
	std::cout << "Identify Random" << std::endl;
	Base *random1 = generate();
	identify(random1);
	identify(*random1);
	A *a = new A;
	B *b = new B;
	C *c = new C;
	std::cout << "Identify A" << std::endl;
	identify(a);
	identify(*a);
	std::cout << "Identify B" << std::endl;
	identify(b);
	identify(*b);
	std::cout << "Identify C" << std::endl;
	identify(c);
	identify(*c);
	delete random1;
	delete a;
	delete b;
	delete c;
	return 0;
}