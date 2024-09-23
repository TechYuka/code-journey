#include <iostream>

int main(int argc, char const *argv[])
{
	int output[2];
	int target = 1000;
	int nums[1000];
	int tamanho = sizeof(nums) / sizeof(nums[0]);

    // Preenche o array com os números de 1 a 1000
    for (int i = 0; i < tamanho; ++i) {
        nums[i] = i + 1;  // Atribui o valor i+1 para cada índice
    }

	for (int i1 = 0; i1 < tamanho; ++i1)
	{
		for (int i2 = 0; i2 < tamanho; ++i2)
		{
			if ((nums[i1] + nums[i2]) == target && i1 != i2)
			{
				std::cout << "Resultado: [" << i1 << ", " << i2 << "]" << std::endl;
				return 0;
			}
		}

	}
	return 0;
}