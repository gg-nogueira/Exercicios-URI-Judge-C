#include <stdio.h>
#include <math.h>
#include<locale.h>



int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite um número inteiro ! :-)\n");
	scanf("%d", &x);
	printf("Digite outro número inteiro ! :-) \n");
	scanf("%d", &y);
	printf("Agora digite um número real !! :-) \n");
	scanf("%f", &z);
	
	dx=x*2;
	my=y/2;
	
	printf("\nSendo assim....\nO produto do dobro do primeiro com metade do segundo é %.2f", dx*my);
	printf("\nA soma do triplo do primeiro com o terceiro é %.2f", (3*x)+z);
	printf("\nO terceiro elevado ao cubo é %.2f", pow(z,3));
	
	return 0;
	
}
