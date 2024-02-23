#include <iostream>
int main()
{
	int* ptr;
	int value;
	int &ref = value;
	value = 10;
	std::cout << "Print the referance:  " << ref << std::endl;
	ref = 20;
	std::cout << "Print the value:  " << value << std::endl;
	ptr = &ref;
	std::cout << "Print ptr:  " << ptr << std::endl;
	ptr = &value;
	std::cout << "Print ptr:  " << *ptr << std::endl;
	return 0;

}
