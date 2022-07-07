#include<iostream>

using namespace std;

int main()
{
	cout << "Digite 2 inteiros: " << endl;
	int numA, numB;
	cin >> numA;
	cin >> numB;

	cout << "O quociente " << numA << "/" << numB << " é " << numA / numB;
	cout << "\nO resto da divisão " << numA << "%" << numB << " é " << numA % numB;
}