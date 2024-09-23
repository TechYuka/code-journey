// Lê 3 números a partir de um txt de entrada, soma os numeros e escreve em um txt de sada

#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
	ifstream entrada;
	ofstream saida;

	entrada.open("painel12-1Entrada.txt");
	saida.open("painel12-1Saida.txt");

	int primeiro, segundo, terceiro;
	entrada >> primeiro >> segundo >> terceiro;
	saida << "A soma dos 3 primeros \n"
			<< "Numeros no arquivo de entrada\n"
			<< "é " << (primeiro+segundo+terceiro)
			<< "\n " << primeiro << " , " << segundo
			<< " , " << terceiro << endl;

	entrada.close();
	saida.close();

	return 0;
}


// gostei de observar como o programa se comporta sem o arquvo de entrada sem o de saida e com outros caracteres no arquivo