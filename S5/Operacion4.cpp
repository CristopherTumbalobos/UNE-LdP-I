#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL,"");
	
	float n,a1,r,tn;
	
	printf("Ingrese el n�mero de t�rminos que quiere calcular: ");
	scanf("%f",&n);
	printf("Ingrese el primer t�rmino de la progresi�n: ");
	scanf("%f",&a1);
	printf("Ingrese la raz�n de la progresi�n aritm�tica: ");
	scanf("%f",&r);
	
	tn=a1+(n-1)*r;
	printf("\nEl t�rmino buscado es: %.2f", tn);
	
	return 0;
}
