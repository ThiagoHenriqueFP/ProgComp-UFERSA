#include <iostream>
#include <cmath>

using namespace std;

float quadratica(float, float, float);

int main()
{
	float a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;

	if (quadratica(a, b, c) == 0) {
		cout << "\n";
	}
	else {
		cout << "\n " << quadratica(a, b, c);
	}
}

float quadratica(float a, float b, float c)
{
	int x = -(4 * a * c);

	float delta = pow(b, 2) + x;

	if (delta < 0) {
		cout << endl << "não há raízes reais";
	}
	else if (delta == 0) {
		return -b/2*a;
	}
	else {
		cout << "Raíz 1: " << (-b + sqrt(delta)) / 2 * a << "\nRaíz 2: " << (-b - sqrt(delta)) / 2 * a;
		return 0;
	}
}