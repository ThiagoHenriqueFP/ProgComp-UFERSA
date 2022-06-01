#include <iostream>

int main()
{
	char fullName[50];
	do {
		int len = 0;

		std::cin.getline(fullName, 50);

		int check = 0;
		for (int i = 0; fullName[i] != '\n' || fullName[i] != '\0'; i++) {

			if ((fullName[i - 1] == ' ' && fullName[i] >= 97) || i == 0) {
				check++;
				fullName[i] = fullName[i] - 32;
			}
			else if ((fullName[i] == 'd' || fullName[i] == 'D') && (fullName[i + 1] == 'e' || fullName[i + 1] == 'E')) {
				fullName[i] = 'd';
				fullName[i + 1] = 'e';
			}
			else if (fullName[i] == ' ')
				;
			else if(!((fullName[i] - 32) >= 65)){
				check++;
				fullName[i] = fullName[i] + 32;
			}
		}

		bool test;
		check > 0 ? test = true : test = false;

		if (test)
			std::cout << fullName << "\t\t<---- CORRIGIDO";
		else
			std::cout << fullName;
	}
	while (strcmp(fullName, "fim"));
}