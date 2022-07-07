#include <iostream>
using namespace std;

int bitsBaixos(unsigned short value)
{
	int num = INT32_MAX;

	value = value & (num << 16);

	return value;
}

int bitsAltos(unsigned value)
{
	int num = INT32_MAX;
	
	value = value & (num >> 16);

	std::cout << std::endl << value;

	return 0;
}