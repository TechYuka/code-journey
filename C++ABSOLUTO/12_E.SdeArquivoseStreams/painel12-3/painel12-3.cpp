// Recebe como entrada um arquivo txt lê os primeiros 3 numeros e os soma/escreve em outro arquivo txt
// Gera uma mensagem de erro se não conseguir abrir os arquivos

#include <iostream> // Para mensagem de erro (cout)
#include <fstream> // Para entrada e saida (ifstream, ofstream)
#include <cstdlib> // Para ejetar do programa (exit)
using namespace std;

int main(int argc, char const *argv[])
{
	ifstream entrada;
	ofstream saida;

	entrada.open("infile.txt"); 
	if (entrada.fail())//Espera-se que de erro passe deste if
	{
		cout << "A abertura do arquivo de entrada falhou.\n";
		exit(1);
	}

	saida.open("outfile.txt");
	if (saida.fail())
	{
		cout << "A abertura do arquivo de saida falhou.\n";
	}

	int primeiro, segundo, terceiro;
	entrada >> primeiro >> segundo >> terceiro;
	saida << (primeiro+segundo+terceiro);

	entrada.close();
	saida.close();
	return 0;
}