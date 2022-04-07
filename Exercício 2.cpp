#include <stdio.h>
#include <locale.h>
#include <math.h>

float p;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite o preço da compra para calcularmos o desconto !!\n");
	scanf("%f",&p);
	
	if (p>=101){
		printf("Foi aplicado um desconto de 10%% !! Agora o preço é de R$ %.2f :-)", p*0.90);
	} else {
		printf("Foi aplicado um desconto de 5%% !! Agora o preço é de R$ %.2f :-)", p*0.95);
	}
	
	return 0;
}
