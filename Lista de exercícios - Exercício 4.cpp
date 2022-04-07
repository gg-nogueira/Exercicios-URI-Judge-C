#include <stdio.h>
#include <math.h>
#include<locale.h>

float n1, n2, n3, nota;

int main(){
	setlocale(LC_ALL,"Portuguese");
	printf ("Digite sua nota 1\n");
	scanf ("%f", &n1);
	printf ("Digite sua nota 2\n");
	scanf ("%f", &n2);
	printf ("Digite sua nota 3\n");
	scanf ("%f", &n3);
	
	nota = n1*0.2 + n2*0.3 + n3*0.5;
	
	printf("\nSua nota final é de: %.2f\n", nota);
	
	return 0;
}
