#include <fstream>
#include <iostream>

int main() {
	std::ofstream fout;
	int num[100] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100 };

	fout.open("num-t.txt");

	if (!fout.is_open()) 
		exit(EXIT_FAILURE);

	for (int i = 1; i <= 100; i++) 
		fout << num[i];

	fout.close();

	fout.open("num - B.bin", std::ios_base::out | std::ios_base::binary);

	if (!fout.is_open())
		exit(EXIT_FAILURE);

	fout.write((char*)&num, sizeof(int) * 100);

	fout.close();

	std::ifstream fin;
	fin.open("num-B.bin", std::ios_base::in | std::ios_base::binary);

	int num2[100];

	fin.read((char*)&num2, sizeof(int) * 100);

	for (int i = 0; i <= 100; i++)
		std::cout << num[i] << " ";

	fin.close();

	//O arquivo em texto tem 201 bytes e o binário tem 400 bytes, por conta que foi reservado os 400 bytes para alocar
	//os números, se fossem utilizado números grandes, o arquivo binário poderia ficar menor que um arquivo texto, já que
	//seria utilizado toda a faixa alocada e não teria mudança de tamanho. Já para o arquivo texto se tivessem mais numeros
	//o arquivo ficaria maior por conta que cada numero seria um caracter, assim quanto mais caracteres maior o arquivo.
} 