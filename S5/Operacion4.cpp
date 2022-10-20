#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL,"");
	
	float n,a1,r,tn;
	
	printf("Ingrese el número de términos que quiere calcular: ");
	scanf("%f",&n);
	printf("Ingrese el primer término de la progresión: ");
	scanf("%f",&a1);
	printf("Ingrese la razón de la progresión aritmética: ");
	scanf("%f",&r);
	
	tn=a1+(n-1)*r;
	printf("\nEl término buscado es: %.2f", tn);
	
	return 0;
}
