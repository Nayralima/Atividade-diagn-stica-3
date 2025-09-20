#include <stdio.h>

int main() {
	float preco;
	float descontoPercentual;
	float valorDesconto;
	float precoFinal;
	
	printf("Qual o preço do produto: ");
	scanf("%f", &preco);
	
	printf("Qual o percentual de desconto do produto: ");
	scanf("%f", &descontoPercentual);
	
    valorDesconto = (preco * descontoPercentual) / 100.0;
    precoFinal = preco - valorDesconto;
	
	printf("O valor total com desconto e: %.2f\n", precoFinal);
}