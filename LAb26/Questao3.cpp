#include <iostream>

void firstName(char*);
void lastName(char*);

int main() {
	char name[50]{};

	std::cin.getline(name, 50);
	while (strcmp(name, "fim"))
	{
		lastName(name);
		std::cout << ", ";
		firstName(name);
		std::cout << std::endl;
		std::cin.getline(name, 50);
	}
}

void firstName(const char* fullName) {
	for (int i = 0; fullName[i] != ' '; i++)
		std::cout << fullName[i];
}

void lastName(const char* fullName) {
	int space = 0;
	for (int i = 0; fullName[i] != '\0'; i++)
		if (fullName[i] == ' ')
			space = i;

	for (int i = space+1; fullName[i] != '\0'; i++)
		std::cout << fullName[i];
}