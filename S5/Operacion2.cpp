#include <stdio.h>
#include <cmath>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL,"");
	
	float n, resultado=0;
	
	printf("Ingrese un número: ");
	scanf("%f",&n);
	resultado = sqrt(n);
	printf("\nEl resultado de la raíz cuadrada es: %.2f",resultado);
	
	return 0;
}
