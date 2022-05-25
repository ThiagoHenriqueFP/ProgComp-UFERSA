#include <iostream>

int main()
{
	int count = 1;
	bool check = true;
	while (check)
	{
		int countLaco = 0;
		for (int i = 1; i <= 20; i++)
		{
			if (count % i == 0)
				countLaco++;
		}
		if (countLaco >= 20)
		{
			std::cout << "O numero " << count << " pode ser dividido por todos os numeros de 1 a 20";
			check = false;
		}
		count++;
	}
}