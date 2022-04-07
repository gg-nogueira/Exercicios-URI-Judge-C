#include <stdio.h>
#include <locale.h>
#include <math.h>

float h;
char g;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	printf("Qual a sua altura, em metros ? \n");
	scanf("%f",&h);
	printf("Legal... E qual o seu sexo ? (Digitar M ou F) \n");
	scanf("%s",&g);
	
	if(g=='m'){
		printf("O seu peso ideal é de %.2f kg !", (72.7*h)-58);
	}else{
		printf("O seu peso ideal é de %.2f kg !", (62.1*h)-44.7);
	}
	
	return 0;
}
