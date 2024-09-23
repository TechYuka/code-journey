#include <iostream>

int main(int argc, char const *argv[])
{
	int numeros[5] = {1,2,3,4,5};

	int target = ;

	int num1, num2;

	int output[2];

	for (int i1 = 0; i1 < 5; ++i1)
	{
		for (int i2 = 0; i2 < 5; ++i2)
		{
			if ((numeros[i1] + numeros[i2]) == target && i1 != i2)
			{
				std::cout << "Resultado: [" << i1 << ", " << i2 << "]" << std::endl;
				return 0;
			}
		}

	}
	return 0;
}