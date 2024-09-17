//Given an integer array nums, return true if any value appears more than once in the array, otherwise return false.
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
	int matrix[5] = {1,2,3,5,1};
	int indexSegundo = 0;  // Declarei para poder usar fora do bloco for

	for (int indexPrimeiro = 0;indexPrimeiro < 5; indexPrimeiro++){
		for (indexSegundo = 0;indexSegundo < 5; indexSegundo++){

			if (matrix[indexPrimeiro] == matrix[indexSegundo] && indexPrimeiro != indexSegundo)
			{
				std::cout << "\ntrue\n\n"; //Há duplicatas no vetor
				return 0;
			}

		}

	indexSegundo = 0;

	}

	std::cout << "\nfalse\n\n"; //Não há duplicatas 

	return 0;
}