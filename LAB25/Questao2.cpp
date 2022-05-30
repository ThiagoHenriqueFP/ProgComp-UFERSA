#include <iostream>
#include <fstream>
#include <stdlib.h> 

struct Bigger {
  int number;
  int pos;
};

Bigger analyzeVet(int []);

int main(){
  std::ofstream fout;
  srand(time(NULL));
  fout.open("file.txt");
  for(int i = 0; i<100; i++){
    fout << rand() % 1000 << " ";
  }
  fout << "\n";
  fout.close();
  char file[20];
  std::cout << "Arquivo: ";
  std::cin >> file;

  std::ifstream fin;
  fin.open(file);
  
  if(!fin.is_open()){
    std::cout << "Error: " << file << " canno't be opened" << std::endl;
    exit(EXIT_FAILURE);
  }

  int aux[100], pos = 0;
  while (!fin.eof() && fin.good()) 
    fin >> aux[pos++];

  Bigger result = analyzeVet(aux);
  std::cout << "O maior numero e:" << result.number << "\nNa posicao:" << result.pos;
}

Bigger analyzeVet (int vet[]){
  int aux, number;
  Bigger b;
  for (int i=0; i<100;i++){
    if(vet[i] > aux){
      aux = vet[i];
      b.number = aux;
      b.pos = i;
    }
  }
}

/* Construa uma programa que leia uma lista de até 100 números de um arquivo
texto e armazene-os em um vetor. O programa deve passar o vetor para uma
função que deve encontrar e retornar o menor elemento, o maior elemento, e suas
respectivas posições dentro do vetor. Defina um registro para ser o tipo de retorno
da função. Utilize const nos parâmetros da função sempre que possível. */