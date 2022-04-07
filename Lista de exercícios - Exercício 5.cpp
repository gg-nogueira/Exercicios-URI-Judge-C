#include <stdio.h>
#include <math.h>
#include<locale.h>

float km, p;

int main(){
	setlocale(LC_ALL,"Portuguese");
	printf("Digite a distância da sua corrida, em km\n");
	scanf("%f", &km);
	
	p= (3*km)+4.90;
	
	printf("\nVocê rodará %.2f km e o preço total a ser pago será de R$ %.2f\n", km, p);
	
	return 0;
}
