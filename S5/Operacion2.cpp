#include <stdio.h>
#include <cmath>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL,"");
	
	float n, resultado=0;
	
	printf("Ingrese un n�mero: ");
	scanf("%f",&n);
	resultado = sqrt(n);
	printf("\nEl resultado de la ra�z cuadrada es: %.2f",resultado);
	
	return 0;
}
