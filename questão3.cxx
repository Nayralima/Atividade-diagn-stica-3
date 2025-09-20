#include <stdio.h>

int main() {
    int soma = 0;
    int valorDado;
    
    printf("A soma só acaba em 20.\n");
    while (soma < 20) {
        printf("Soma atual: %d. Digite o valor do dado: ", soma);
        scanf("%d", &valorDado);
        
        soma += valorDado;
    }
    
    printf("\nParabens, chegou em 20!", soma);
    
    return 0;
}
