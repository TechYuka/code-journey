#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
	 // Método twoSum, retorna os índices dos dois números que somam o alvo (target)
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashmap; // Declara o hashmap

        for (int i = 0; i < nums.size(); ++i) 
        {
        	 int complemento = target - nums[i];  // Calcula o complemento necessário

        	 // Verifica se o complemento já está no mapa
        	 if (hashmap.find(complemento) != hashmap.end()) 
        	 {
        	 	 return {hashmap[complemento], i}; // Retorna os dois índices
        	 }

        hashmap[nums[i]] = i; // Armazena o número atual com seu índice

        }

        return {}; // Se não encontrar um par retorna um vetor vazio
    }
};


int main(int argc, char const *argv[])
{
	int target = 10;
	vector<int> nums = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

	//nicializa a classe Solution
	Solution solucao;

	vector<int> resultado = solucao.twoSum(nums, target); 

	// Imprime o resultado
    if (!resultado.empty()) {
        std::cout << "Resultado: [" << resultado[0] << ", " << resultado[1] << "]" << std::endl;
    } else {
        std::cout << "Nenhum par encontrado!" << std::endl;
    }

	return 0;
}