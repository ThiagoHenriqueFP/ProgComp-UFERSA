#include <iostream>

void insert();
void remove();
void search();

int main() {
	void (*func[])(void) = { insert, remove, search };

	int select;
	std::cin >> select;
	if (select - 1 > 4)
		std::cout << "Saindo....";
	else
		func[select - 1]();
}

void insert() {
	std::cout << "Insira um item";
}

void remove() {
	std::cout << "Remvoa um item";
}

void search() {
	std::cout << "Procure um item";
}