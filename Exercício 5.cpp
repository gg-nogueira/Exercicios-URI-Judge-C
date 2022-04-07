#include <stdio.h>
#include <locale.h>


float peso,excesso,multa,pesolimite=50;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	printf("Olá Seu João! Quantos quilos de peixe o senhor pescou hoje?\n");
	scanf("%f",&peso); 
	
		
	if (peso>pesolimite){
    excesso = peso - pesolimite;
    multa = excesso * 4.00;
    printf("\nVai precisar pagar multa Seu João!! O valor da multa é de R$ %.2f\n", multa);
    } else{
    	printf("\nNão é necessário pagar multa Seu João! O peixe pesa apenas %.2f kg!\n", peso);
	}
	
	return 0;
	
}
