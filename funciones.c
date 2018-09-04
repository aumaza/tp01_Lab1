#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

/*Implementamos la funcion menu.-*/


void menuGeneral()
{
system("cls");

int opc;
int num1;
int num2;

/*printf("\nIngresar 1er Operando (A): ");
scanf("%f", &num1);

printf("\nIngressar 2do Operando (B): ");
scanf("%f", &num2);*/



do{
system("cls");

printf("\n======================================");
printf("\nSeleccione la Operacion a Realizar");
printf("\n======================================\n");
//printf("\nEl valor de A es: %.2f", num1);
//printf("\nEl valor de B es: %.2f", num2);
printf("\n\n======================================\n");
printf("\n1. Ingrese 1er operando (A=x)");
printf("\n2. Ingrese 2do operando (B=y)");
printf("\n\n======================================\n");
printf("\n3. Calcular todas las operaciones");
printf("\na) Calcular la suma (A+B)");
printf("\nb) Calcular la resta (A-b)");
printf("\nc) Calcular la division (A/B)");
printf("\nd) Calcular la Multiplicacion (A*B)");
printf("\ne) Calcular el Factorial (A!)");
printf("\n\n======================================\n");
printf("\n4. Informar resultados");
printf("\n5. Reiniciar");
printf("\n6. Salir");
printf("\n\n======================================");
printf("\nOpcion: ");
scanf("%d", &opc);
printf("\n======================================");


switch(opc)
{

case 1: printf("\nIngresar 1er Operando (A): ");
        scanf("%d", &num1); break;
case 2: printf("\nIngresar 2do Operando (B): ");
        scanf("%d", &num2); break;
case 3: sumar(num1,num2); //break;
        restar(num1,num2); //break;
        dividir(num1, num2); //break;
        multiplicar(num1, num2); //break;
        factorial(num1, num2); break;
//case 4: /*printf("\n======================================\n");
        /*printf("\n%d: ", num1);
        printf("\n%d: ", num2);
        system("pause"); break;*/
        /*printf("\nEl resultado de A+B es: %d", sumar(num1,num2));
        printf("\nEl resultado de A-B es: %d", restar(num1,num2));
        printf("\nEl resultado de A*B es: %d", multiplicar(num1,num2)); break;*/
        //resultados(sumar(num1,num2),restar(num1,num2),multiplicar(num1,num2));
        //system("pause");
        //break;
//case 6: menuGeneral(); break;
}
}while(opc != 6);

}
/*generamos la funcion sumar.-*/

int sumar(int a, int b)
{
system("cls");

int suma;


suma = a + b;

printf("======================================");
printf("\nEl resultado de A+B es: %d", suma);
printf("\n======================================\n");

/*system("pause");
system("cls");*/

return suma;

//getchar();

}


/*//generamos la funcion restar.-*/

int restar(int a, int b)
{
//system("cls");

int resta=0;

resta = a - b;

printf("======================================");
printf("\nEl resultado de A-B es: %d", resta);
printf("\n======================================\n");

/*system("pause");
system("cls");*/

return resta;

}

/*//generamos la funcion dividir.-*/

int dividir(int a, int b){
//system("cls");

int div=0;

div = a / b;

if(b == 0)
{
printf("======================================");
printf("\n\nLa division no es valida!! \n\nNo se puede dividir entre cero");
printf("\n======================================\n");
}

else
{
printf("=========================================");
printf("\nEl resultado de A/B es: %d", div);
printf("\n=========================================\n");
}
/*system("pause");
system("cls");*/

return div;



}

/*generamos la funcion multiplicar.-*/

int multiplicar(int a, int b)
{
//system("cls");

int mult=0;


mult = a * b;
printf("============================================");
printf("\nEl resultado de A*B es: %d", mult);
printf("\n============================================\n");

/*system("pause");
system("cls");*/


return mult;

}

//Definimos la funcion de factoreo

int factorial(int a, int b)
{
//system("cls");

    int i;
    int valor1=a;
    int valor2=b;
    int factorial = 1;
    int facto = 1;

    //printf("Ingrese el valor a factorear: ");
    //scanf("%d", &valor);

    for(i = valor1; i >= 1; i--)
    {
        factorial = factorial  * i;
    }
    printf("======================================");
    printf("\nEl factorial de A es: %.d\n", factorial);

    for(i=valor2; i>=1; i--)
    {
        facto = facto * i;
    }
    printf("======================================");
    printf("\nEl factorial de B es: %d\n", facto);
    printf("======================================\n");

system("pause");
system("cls");

    return 0;
}

void resultados(int suma(), int restar(), int multiplicar())
{

    printf("\n=================================================\n");
    printf("\nEl resultado de A+B es: %d", sumar);
    printf("\nEl resultado de A-b es: %d", restar);
    printf("\nEl resultado de A*b es: %d", multiplicar);
    printf("\n=================================================\n");


}
