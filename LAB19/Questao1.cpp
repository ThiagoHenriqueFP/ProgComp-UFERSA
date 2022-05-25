#include <iostream>

int main()
{
	int mat[4][4] = { 3, 1 ,5, 5, 1, 5, 5, 6, 2, 3, 4, 5, 4, 9, 1, 8 };
	int somaCol[4] = {0};
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++)
		{
			std::cout << mat[i][j] << " ";
			somaCol[i] += mat[j][i];
		}
		std::cout << std::endl;
	}
	std::cout << "\n";
	for (int i = 0; i < 4; i++)
	{
		std::cout << somaCol[i] << " ";
	}

}