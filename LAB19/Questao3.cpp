#include <iostream>

int main()
{
	int mat[2][3] =
	{
	 {1,2,3},
	 {4,5,6}
	};

	std::cout << mat[0][0] << " " << mat[0] << " " << &mat[0][0];
}