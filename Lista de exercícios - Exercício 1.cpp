#include <stdio.h>
#include <math.h>
#include<locale.h>

int main(){
	float x1,x2,y1,y2,r;
	setlocale(LC_ALL,"Portuguese");
	printf("Digite os valores de X, separados por espa�o\n");
	scanf("%f", "%f", &x1, &x2);
	printf("Digite os valores de Y, separados por espa�o\n");
	scanf("%f", "%f", &y1, &y2);
	
	r= sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	
	printf("A Dist�ncia entre esses pontos � de %.4f", r);
	
	return 0;

}
