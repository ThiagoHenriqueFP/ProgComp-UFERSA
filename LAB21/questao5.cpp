#include <iostream>

int main()
{
	int count = 0, aux;

	for (int i = 2; i <= 1001; i++)
	{
		int primo = 0;
		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0) {
				primo++;
			}
		}
		if (primo <= 2) {
			std::cout << i << " ";
			aux = i;
			count++;
		}
	}

	std::cout << "\nO " << count << " numero primo e " << aux;
}