#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> seen;  // Conjunto para armazenar os elementos vistos
        for (int num : nums) {
            if (seen.find(num) != seen.end()) {
                return true;  // Se já vimos esse número, há duplicatas
            }
            seen.insert(num);
        }
        return false;  // Não há duplicatas
    }
};

int main() {
    Solution solution;
    
    vector<int> nums = {1, 2, 3, 4, 5, 6, 2};
    
    if (solution.hasDuplicate(nums)) {
        cout << "Há duplicatas no vetor." << endl;
    } else {
        cout << "Não há duplicatas no vetor." << endl;
    }

    return 0;
}
