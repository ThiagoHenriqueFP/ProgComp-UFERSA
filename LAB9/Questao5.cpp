#include <iostream>

using namespace std;

int main()
{
	double var1 = 257.795;
	int var2 = int(var1);

	cout << var1 * 100 << endl << var2 * 100;

	//O tipo double possue mais digitos significativos, n�o perdendo, assim a sua precisa�o neste caso.
}