#include <iostream>
#include <fstream>

void print(int);
void print(const char*);
void print(double);

int main() {
	print(2);
	print("porra");
	print(3.4);
}

void print(int i) {
	std::cout << i << std::endl;
}

void print(float i) {
	std::cout << i << std::endl;
}

void print(const char* i) {
	std::cout << i << std::endl;
}
