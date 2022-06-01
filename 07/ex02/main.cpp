#include <iostream>
#include "Array.hpp"

// int main() {
// 	Array<int> arr1;
// 	Array<std::string> arr2(3);
// 	Array<int> arr3(5);

// 	std::cout << arr3[2] << std::endl;
// 	try {
// 		std::cout << arr3[-1] << std::endl;
// 	} catch (std::exception &e) {
// 		std::cout << e.what() << std::endl;
// 	}
// 	try {
// 		std::cout << arr3[10] << std::endl;
// 	} catch (std::exception &e) {
// 		std::cout << e.what() << std::endl;
// 	}

// 	std::cout << arr3.size() << std::endl;

// 	arr3[1] = 10;
// 	Array<int> arr4 = arr3;
// 	arr4[2] = 20;

// 	std::cout << "arr 3: " << std::endl;
// 	for (unsigned int i = 0; i < arr3.size(); i++)
// 		std::cout << arr3[i] << " ";
// 	std::cout << "\narr 4: " << std::endl;
// 	for (unsigned int i = 0; i < arr4.size(); i++)
// 		std::cout << arr4[i] << " ";
// 	std::cout << std::endl;
// }

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    // SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}