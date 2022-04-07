#include <stdio.h>
#include <locale.h>


int s,tent=3;
char n[40];

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite seu nome completo\n");
	scanf(" %[^\n]",&n); 
	
	for(int i=1; i<=tent; i++){
	printf("\nDigite sua senha de 4 dígitos \n");
	scanf("%d", &s);
	
	if(s==4531){
		printf("\nA senha está correta ! Seja bem vindo(a) Senhor(a) %s! \n", n);
		
		break;
	}else {
		printf("\nA senha está incorreta ! Tente novamente\n");
	}
}
	return 0;
	
}
