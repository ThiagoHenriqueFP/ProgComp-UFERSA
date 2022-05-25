#include <iostream>

int main()
{
	std::cout << "Digite 10 velocidades\n";
	int vel[10], multa = 0, count = 0;

	for (int i = 0; i < 10; i++)
	{
		std::cin >> vel[i];
	}
	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
	{
		if (vel[i] > 80)
		{
			count++;
			multa += (vel[i] - 80) * 8;
			std::cout << vel[i] << "Km/h excede o limite, multa = " << (vel[i] - 80) * 8 << std::endl;
		}
	}

	std::cout << count << " carros foram multados. Total de multas: " << multa;
}