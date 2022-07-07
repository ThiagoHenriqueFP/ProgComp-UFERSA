#include <iostream>

struct CharSet
{
	char* str;
	int tam;
};

void constCharAdd(CharSet, const char*);

int main() {
	const char* name = "Thiago";
}

void constCharAdd(CharSet cs, const char* cc) {
	const char* ptr = cc;
	cs.str = ptr;
}