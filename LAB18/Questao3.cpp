#include <iostream>

struct NewType
{
	char newVet[50] = {"ola meu parcero @joazinho de quebrada"};
};

std::ostream& operator << (std::ostream& strm, NewType* nv)
{
	for (int i = 0; nv->newVet[i] != '@'; i++)
	{
		strm << nv->newVet[i];
	}
	return strm;	
}

int main()
{
	NewType vet;
	NewType* ptr = &vet;
	std::cout << ptr;
}