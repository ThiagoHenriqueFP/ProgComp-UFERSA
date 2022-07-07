#include <iostream>
#include <string>

using namespace std;

int main()
{
	string d1, d2, d3;
	cout << "Quais suas datas comemorativas preferidas? ";
	cin >> d1 >> d2 >> d3;

	string res = d1 + ", " + d2 + " e " + d3 + " sao belas festas";
	cout << res;
	if (d1 == "natal" || d1 == "Natal" || d2 == "natal" || d2 == "Natal" || d3 == "natal" || d3 == "Natal") {
		cout << endl << "O Natal tambem e uma das minhas preferidas";
	}
}