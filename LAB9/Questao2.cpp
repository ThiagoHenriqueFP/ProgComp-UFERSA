#include<iostream>

using namespace std;

int main()
{
	cout << "Digite 2 inteiros: " << endl;
	int numA, numB;
	cin >> numA;
	cin >> numB;

	cout << "O quociente " << numA << "/" << numB << " � " << numA / numB;
	cout << "\nO resto da divis�o " << numA << "%" << numB << " � " << numA % numB;
}