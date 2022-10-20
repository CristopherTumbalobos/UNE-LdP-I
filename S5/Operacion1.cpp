#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	float a, b, suma, resta, producto, cociente;
	
	printf("Ingrese el primer número: ");
	scanf("%f",&a);
	printf("Ingrese el segundo número: ");
	scanf("%f",&b);
	
	/*&: Amspersand*/
	
	suma=a+b;
	resta=a-b;
	producto=a*b;
	cociente=a/b;
	
	printf("\nEl resultado de la suma es: %.0f",suma);
	printf("\nEl resultado de la resta es: %.0f",resta);
	printf("\nEl resultado de la multiplicación es: %.0f",producto);
	printf("\nEl resultado de la división es: %.2f",cociente);
	
	return 0;
}
