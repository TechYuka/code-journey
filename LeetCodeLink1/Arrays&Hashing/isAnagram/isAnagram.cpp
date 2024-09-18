#include <iostream>
#include <string>
#include <algorithm>  // Para std::sort e std::transform

class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        // Remove espaços em branco
        s.erase(std::remove(s.begin(), s.end(), ' '), s.end());
        t.erase(std::remove(t.begin(), t.end(), ' '), t.end());

        // Verifica se as strings têm o mesmo tamanho
        if (s.size() != t.size()) {
            return false;
        }

        // Converte para minúsculas
        std::transform(s.begin(), s.end(), s.begin(), ::tolower);
        std::transform(t.begin(), t.end(), t.begin(), ::tolower);

        // Ordena as strings
        std::sort(s.begin(), s.end());
        std::sort(t.begin(), t.end());

        std::cout << "\"" << s << "\" e \"" << t << "\" ordenadas.\n" << std::endl;

        // Compara as strings ordenadas
        return s == t;
    }
};

int main() {
    Solution solution;

    std::string str1 = "Listen";
    std::string str2 = "Silent";

    if (solution.isAnagram(str1, str2)) {
        std::cout << "\"" << str1 << "\" e \"" << str2 << "\" são anagramas." << std::endl;
    } else {
        std::cout << "\"" << str1 << "\" e \"" << str2 << "\" não são anagramas." << std::endl;
    }

    return 0;
}
