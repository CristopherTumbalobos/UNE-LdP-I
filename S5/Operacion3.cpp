#include <stdio.h>
#include <cmath>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL,"");
	
	float n, raiz, resultado=0;
	
	printf("Ingrese un n�mero: ");
	scanf("%f",&n);
	printf("�Qu� raiz desea obtener?: ");
	scanf("%f",&raiz);
	resultado = pow(n,1/raiz);
	printf("\nEl resultado de la ra�z en�sima es: %.2f",resultado);
	
	return 0;
}
