#include <stdio.h>
#include <math.h>
#include<locale.h>

float km, p;

int main(){
	setlocale(LC_ALL,"Portuguese");
	printf("Digite a dist�ncia da sua corrida, em km\n");
	scanf("%f", &km);
	
	p= (3*km)+4.90;
	
	printf("\nVoc� rodar� %.2f km e o pre�o total a ser pago ser� de R$ %.2f\n", km, p);
	
	return 0;
}
