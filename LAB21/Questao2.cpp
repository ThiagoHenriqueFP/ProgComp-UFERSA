#include <iostream>

int main()
{
	int num;
	do {
		std::cin >> num;
	} while (num < 0);

	int count = 0;
	for (int i = 1; i < num; i++)
		if (num % i == 0) {
			count++;
		}

	if (count > 1)
		std::cout << "Não e primo!";
	else
		std::cout << "E primo!";
}