#include<iostream>

int main()
{
	std::cout << " Digite a distancia para a viagem: ";

	int km;
	std::cin >> km;

	if (km <= 200) {
		std::cout << "\nO valor da Passgem é: " << km * 0.5 << "R$";
	}
	else if (km <= 400) {
		std::cout << "\nO valor da Passgem é: " << km * 0.4 << "R$";
	}
	else {
		std::cout << "\nO valor da Passgem é: " << km * 0.3 << "R$";
	}
}