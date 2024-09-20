// Determinar o valor de :
#include <iostream>
#include <cmath> // Funções: sqrt, pow, fabs, ceil, floor
#include <cstdlib> // Funções: abs
#include <any> // Declaração any
using namespace std;

int main(int argc, char const *argv[])
{
	any resultado = 0; // declara a variavel como qualquer tipo para experimentar o tipo any

	resultado = sqrt(16); // Raiz quadrada

	cout << endl << any_cast<double>(resultado) << endl;

	resultado = pow(2, 3); // Potência

	cout << endl << any_cast<double>(resultado) << endl;

	resultado = abs(3); // Valor absoluto para int

	cout << endl << any_cast<int>(resultado) << endl;

	resultado = fabs(-3.0); // Valor absoluto para tipo double

	cout << endl  << any_cast<double>(resultado) << endl;

	resultado = ceil(5.1); // Aredonda para o proximo inteiro

	cout << endl << any_cast<double>(resultado) << endl;

	resultado = floor(5.8); // Aredonda para o inteiro anterior

	cout << endl << any_cast<double>(resultado) << endl;

	// Repetição dos ja usados com pequenas diferenças

	resultado = 7 / abs(-2); // Pelo que eu entendi ele não divide por 7 pois não da

	cout << endl << any_cast<int>(resultado) << endl;

	resultado = sqrt(16); // Da no mesmo usar sem ou com .

	cout << endl << any_cast<double>(resultado) << endl;

	resultado = pow(2.0, 3); // Da no mesmo usar sem ou com .

	cout << endl << any_cast<double>(resultado) << endl;

	resultado = abs(-3); //Absoluto é = numero positivo

	cout << endl << any_cast<int>(resultado) << endl;

	resultado = fabs(-3.5);

	cout << endl << any_cast<double>(resultado) << endl;

	resultado = ceil(5.8);

	cout << endl << any_cast<double>(resultado) << endl;

	resultado = pow(3.0, 2) / 2.0;

	cout << endl << any_cast<double>(resultado) << endl;

	resultado = (7 + sqrt(4)) / 3;

	cout << endl << any_cast<double>(resultado) << endl;

	resultado = pow(2.0, 3.0);

	cout << endl << any_cast<double>(resultado) << endl;

	resultado = pow(1.1, 2);

	cout << endl << any_cast<double>(resultado) << endl;

	resultado = abs(0);

	cout << endl << any_cast<int>(resultado) << endl;

	resultado = fabs(3.5);

	cout << endl << any_cast<double>(resultado) << endl;

	resultado = floor(5.1);

	cout << endl << any_cast<double>(resultado) << endl;

	resultado = pow(3.0, 2) / 2;

	cout << endl << any_cast<double>(resultado) << endl;

	resultado = sqrt(pow(3, 2));

	cout << endl << any_cast<double>(resultado) << endl;

	return 0;

}