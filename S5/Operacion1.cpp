#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	float a, b, suma, resta, producto, cociente;
	
	printf("Ingrese el primer n�mero: ");
	scanf("%f",&a);
	printf("Ingrese el segundo n�mero: ");
	scanf("%f",&b);
	
	/*&: Amspersand*/
	
	suma=a+b;
	resta=a-b;
	producto=a*b;
	cociente=a/b;
	
	printf("\nEl resultado de la suma es: %.0f",suma);
	printf("\nEl resultado de la resta es: %.0f",resta);
	printf("\nEl resultado de la multiplicaci�n es: %.0f",producto);
	printf("\nEl resultado de la divisi�n es: %.2f",cociente);
	
	return 0;
}
