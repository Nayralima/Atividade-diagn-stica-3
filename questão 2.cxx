#include <stdio.h>

int main() {
    int N;
    int soma_dos_quadrados = 0 ;
    
    printf("digite um numero inteiro: ") ;
    scanf("%d", &N) ;
    
    for (int i = 1; i <= N; i++) {
        soma_dos_quadrados += i * i ;
    }
    
    printf("a soma dos quadrados ate %d e: %d\n", N, soma_dos_quadrados) ;
    return 0;
}
