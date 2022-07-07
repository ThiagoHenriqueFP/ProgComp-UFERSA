#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	a = 1 + 2; // linha 1
	b = 1 + a; // linha 2
	c = 1 % 5; // linha 3
	a = a + 2; // linha 4
	b = a - c; // linha 5
	b = 5 * c / 2; // linha 6




	/*|	A	B	C
	1 |	3	trash
	2 |	3	4	trash	
	3 |	3	4	1
	4 |	5	4	1
	5 |	5	4	1
	6 |	5	2	1
	-------------*/
}