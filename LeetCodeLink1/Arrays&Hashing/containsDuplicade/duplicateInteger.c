#include <stdio.h>

int main(int argc, char const *argv[]) {
    int matrix[5] = {1, 2, 3, 5, 1};
    int indexSegundo = 0;  // Declarei para poder usar fora do bloco for

    for (int indexPrimeiro = 0; indexPrimeiro < 5; indexPrimeiro++) {
        for (indexSegundo = 0; indexSegundo < 5; indexSegundo++) {

            if (matrix[indexPrimeiro] == matrix[indexSegundo] && indexPrimeiro != indexSegundo) {
                printf("\ntrue\n\n"); // Há duplicatas no vetor
                return 0;
            }
        }
        indexSegundo = 0;
    }

    printf("\nfalse\n\n"); // Não há duplicatas
    return 0;
}
