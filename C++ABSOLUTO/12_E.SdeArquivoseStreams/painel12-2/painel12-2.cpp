// Anexa os dados no fim do arquivo.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	ofstream saida;
	string entrada;
	char continuar;

	cout << "Abrindo o arquivo data.txt para anexar dados. \n";

	saida.open("data.txt", ios::app); // o ios::app que faz o arquivo não ser reescrito toda vez, ele está na biblioteca iostream

	do{ // loop para digtar varias coisas

		cout << "Digite: ";
		getline(cin, entrada); // o getline captura toda linha digitada em uma string só
		saida << entrada << '\n'; // armazena os dados digitados no arquivo + um \n

		cout << "Deseja continuar adicionando texto? (s/n): ";
		cin >> continuar;
		cin.ignore(); // Limpa o buffer do 'Enter' deixado pelo 'cin'

	} while (continuar == 's' || continuar == 'S'); // Continua enquanto o usuário digitar 's' ou 'S

	saida.close();
	cout << "\nFinal da anexação de dados\n";

	return 0;
}