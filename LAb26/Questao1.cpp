#include <iostream>

int words(char*);

int main() {
	char phrase[80];
	std::cin.getline(phrase, 80);
	int countWords = words(phrase);
	std::cout << "Existem " << countWords << " nestas frase";
}

int words(char* phrase) {
	int i = 0, words = 0;

	do {
		if (phrase[i] == ' ' || phrase[i+1] == '\0')
			words++;
		i++;
	} while (phrase[i] != '\0');

	return words;
}