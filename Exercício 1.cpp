#include <stdio.h>
#include <locale.h>

float a, b;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite o 1� n�mero\n");
	scanf("%f",&a);
	printf("Digite o 2� n�mero\n");
	scanf("%f",&b);
	
	if (a+b>=10){
		printf("O dobro da soma de ambos � %.f", 2*(a+b));
	}else {
		printf("O triplo da soma de ambos � %.f", 3*(a+b));
	}
	
	return 0;
	
}
