#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int numero_entre_1_e_50 = rand() % 50 + 1;
    int numero;

    printf("Tente adivinhar o número entre 1 e 50!\n");

    while (1) {
        printf("Digite seu número: ");
        scanf("%d", &numero);

        if (numero == numero_entre_1_e_50) {
            printf(" Parabéns, você acertou!\n");
            break; 
        } else if (numero > numero_entre_1_e_50) {
            printf("Muito alto, tente um número menor!\n");
        } else {
            printf("Muito baixo, tente um número maior!\n");
        }
    }
    return 0;
}