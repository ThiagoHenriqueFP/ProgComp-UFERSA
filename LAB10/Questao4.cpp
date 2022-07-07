#include <iostream>

using namespace std;

int main()
{
	int vet[5] = { 10, 20, 30, 40, 50 };
	
	for (size_t i = 0; i < 5000; i++)
	{
		vet[i] = 10 * i;

		cout << i << " " << vet[i] << endl;
	}
}