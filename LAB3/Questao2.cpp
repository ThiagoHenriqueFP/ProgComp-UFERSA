#include <iostream>
using namespace std;

int main(void)
{
	int NumTabuada;
	cout << "Qual número deseja saber a tabuada? ";
	cin >> NumTabuada;

	cout << "Tabuada de " << NumTabuada << endl << "-------------" << endl;

	for (int i = 0; i <= 9; i++)
	{
		cout << NumTabuada << " X " << i << " = " << (NumTabuada * i) << endl;
	}
}
