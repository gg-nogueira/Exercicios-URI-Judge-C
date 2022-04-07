#include <stdio.h>
#include <math.h>
#include <locale.h>


int main(){
	float c, f;
	setlocale(LC_ALL,"Portuguese");
	printf("Digite a Temperatura em Fahrenheit\n");
	scanf("%f", &f);
	
	c = ((f -32)* 5 )/9;
	
	printf("\nA temperatura em graus Celsius é de %.2f°C", c);
	
	return 0;
	}
