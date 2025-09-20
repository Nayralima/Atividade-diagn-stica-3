#include <stdio.h>

int main( ) {
	float salarioBase;
	float valorHoraExtra;
	float totalHoraExtra;
	float salarioTotal;
	
	printf("digite o salario: ");
	scanf("%f", &salarioBase);
	
	printf("digite o valor extra: ");
	scanf("%f" , &valorHoraExtra);
	
	printf("digite quantas horas extras foram feitas");
	scanf("%f", &totalHoraExtra);
	
	salarioTotal = salarioBase + (valorHoraExtra * totalHoraExtra);
	printf("seu salario total e: %.2f\n", salarioTotal);
	
	return 0;
}