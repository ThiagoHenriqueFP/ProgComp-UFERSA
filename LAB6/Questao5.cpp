#include < iostream>
#include <climits>

using namespace std;

void isShort(long long);
void isInt(long long);

int main()
{
	cout << "Informe um n�mero para verificar em quantos bits ele cabe: ";
	long long num;
	cin >> num;
	isShort(num);
	isInt(num);
}

void isShort(long long num)
{
	if (num > SHRT_MAX)
	{
		cout << num << " N�o cabe em 16 bits" << endl;
	}
	else {
		cout << num << " Cabe em 16 bits" << endl;
	}
}

void isInt(long long num)
{
	if (num > INT32_MAX)
	{
		cout << num << " N�o cabe em 32 bits" << endl;
	}
	else {
		cout << num << " Cabe em 32 bits" << endl;
	}
}