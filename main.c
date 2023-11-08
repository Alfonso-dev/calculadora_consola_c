#include <stdio.h>
#include "funciones.h"
int main()
{
    int num1, num2, resultado, opcion;
    printf("Bienvenido a la Calculadora\n");
    printf("Ingrese un numero\n");
    scanf("%d", &num1);
    printf("Ingrese otro numero\n");
    scanf("%d", &num2);

    printf("ingrese una opcion\n1- Sumar\n2- restar\n3- multiplicar\n4- dividir\n0- Cancelar\n");
    scanf("%d", &opcion);

    if (opcion == 1)
    {
        resultado = suma(num1, num2);

        printf("el resultado de la suma es: %d\n", resultado);
    }
    else if (opcion == 2)
    {
        resultado = resta(num1, num2);

        printf("el resultado de la resta es: %d\n", resultado);
    }
    else if (opcion == 3)
    {
        resultado = multiplicacion(num1, num2);

        printf("el resultado de la multiplicacion es: %d\n", resultado);
    }
    else if (opcion == 4)
    {
        resultado = division(num1, num2);

        printf("el resultado de la division es: %d\n", resultado);
    }
    else if (opcion == 0)
    {
       printf("Usted ha salido del programa\n");
    }
    else
    {
        printf("Ha ocurrido un error al ingresar datos\n");
    }

    return 0;
}