#include <stdio.h>
#include <locale.h>

float a, b;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite o 1° número\n");
	scanf("%f",&a);
	printf("Digite o 2° número\n");
	scanf("%f",&b);
	
	if (a+b>=10){
		printf("O dobro da soma de ambos é %.f", 2*(a+b));
	}else {
		printf("O triplo da soma de ambos é %.f", 3*(a+b));
	}
	
	return 0;
	
}
