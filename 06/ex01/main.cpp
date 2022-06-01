#include <string>
#include <iostream>

struct Data
{
	int anInt;
	std::string aString;
};

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

int main(void)
{
	Data one;

	one.anInt = 1;
	one.aString = "string";
	uintptr_t data_ptr = serialize(&one);
	std::cout << data_ptr << std::endl;
	Data *two = deserialize(data_ptr);
	std::cout << two->anInt << std::endl;
	std::cout << two->aString << std::endl;
}