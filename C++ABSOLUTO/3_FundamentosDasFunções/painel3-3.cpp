// Exemplo da função exit()

#include <iostream>
#include <cstdlib> // bibliotea que contem o exit
using namespace std;

int main(int argc, char const *argv[])
{
	cout << "Hello, World!";
	exit(1); // Sai do programa a força

	cout << "Essa linha não sera executada";

	return 0;
}