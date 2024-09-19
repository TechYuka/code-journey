// Calcula o tamanho de uma casinha de cachorro que possa ser adquirida com o orçamento dado pelo usuário
// Função sqrt() 
#include <cmath>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	const double COS_PER_SQ_FT = 10.50;
	double orcamento, area, comprimento;

	cout << "Informe quanto quer gastar com a casinha de cachorro $";
	cin >> orcamento;

	area = orcamento/COS_PER_SQ_FT;
	comprimento = sqrt(area); // acha a raiz quadrada de area

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	cout << "Por um preço de $" << orcamento << endl
		<< "Posso lhe construir uma magnífica casinha de cachorro\n"
		<< "com " << comprimento
		<< " pés em cada lado. \n";

	return 0;
}
