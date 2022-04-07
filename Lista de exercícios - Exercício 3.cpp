#include <stdio.h>
#include <locale.h>
#include <math.h>

float t,v,l;

int main() {
	setlocale(LC_ALL,"Portuguese");
    int t,v,l;
	printf("Digite o Tempo da viagem, em horas\n");
	scanf("%d", &t);
	printf("Digite a Velocidade Média, em km/h\n");
    scanf("%d", &v);
    
    l = 12*t*v;
     
    printf("\nVocê precisará de %.4d litros de gasolina!", l);
    return 0;
}
