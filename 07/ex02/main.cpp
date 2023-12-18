#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
    std::cout << "\033[1;31m\n--------------Default main test--------------\033[0m" << std::endl ;
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));

    std::cout << "\nArray 0 to Maxval creation..." << std::endl ;
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    std::cout << "\nCopy cost e operator test..." << std::endl ;
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
    std::cout << "\nTest ou of bounds..." << std::endl ;
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
    delete [] mirror;

    std::cout << "\n\n\033[1;32m------------------Miei test-------------------\033[0m" << std::endl;

    std::cout << "\nTest default constructor" << std::endl;
    Array<int> intArray1;
    std::cout << "Size of intArray1: " << intArray1.size() << std::endl;

    std::cout << "\nTest array size constructor" << std::endl;
    Array<int> intArray2(5);
    std::cout << "Size of intArray2: " << intArray2.size() << std::endl;

    std::cout << "\nInsert data in intArray2 using operator []" << std::endl ;
    for (unsigned int i = 0; i < intArray2.size(); ++i) {
        intArray2[i] = i * 2;
    }

    std::cout << "\nDisplay contents of intArray2" << std::endl ;
    std::cout << "Contents of intArray2: ";
    for (unsigned int i = 0; i < intArray2.size(); ++i) {
        std::cout << intArray2[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "\nTest copy constructor" << std::endl ;
    Array<int> intArray3(intArray2);
    std::cout << "Size of intArray3: " << intArray3.size() << std::endl;

    std::cout << "\nTest exception when accessing out-of-bound index" << std::endl;
    try {
        std::cout << "Accessing out-of-bound index: " << intArray3[10] << std::endl;
    } catch (std::exception& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }
}


/*output corretto
--------------Default main test--------------

Array 0 to Maxval creation...

Copy cost e operator test...

Test ou of bounds...
Index out of bounds, sorry!!
Index out of bounds, sorry!!


------------------Miei test-------------------

Test default constructor
Size of intArray1: 0

Test array size constructor
Size of intArray2: 5

Insert data in intArray2 using operator []

Display contents of intArray2
Contents of intArray2: 0 2 4 6 8 

Test copy constructor
Size of intArray3: 5

Test exception when accessing out-of-bound index
Accessing out-of-bound index: Caught exception: Index out of bounds, sorry!!
*/