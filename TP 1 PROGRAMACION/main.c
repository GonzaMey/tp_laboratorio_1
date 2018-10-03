#include <stdio.h>
#include <stdlib.h>
#include "mey.h"

/*1 Enunciado
Hacer una calculadora. Para ello el programa iniciará y contará con un menú de opciones:
1. Ingresar 1er operando (A=x)
2. Ingresar 2do operando (B=y)
3. Calcular todas las operaciones
a) Calcular la suma (A+B)
b) Calcular la resta (A-B)
c) Calcular la division (A/B)
d) Calcular la multiplicacion (A*B)
e) Calcular el factorial (A!)
4. Informar resultados
a) “El resultado de A+B es: r”
b) “El resultado de A-B es: r”
c) “El resultado de A/B es: r” o “No es posible dividir por cero”
d) “El resultado de A*B es: r”
e) “El factorial de A es: r1 y El factorial de B es: r2”
5. Salir
• Todas las funciones matemáticas del menú se deberán realizar en una biblioteca aparte,
que contenga las funciones para realizar las cinco operaciones.
• En el menú deberán aparecer los valores actuales cargados en los operandos A y B
(donde dice “x” e “y” en el ejemplo, se debe mostrar el número cargado)
• Deberán contemplarse los casos de error (división por cero, etc)
• Documentar todas las funciones
2 Cómo realizar y entregar el trabajo práctico
El trabajo práctico deberá ser entregado en el repositorio de GIT correspondiente al TP1 de la
materia.
El mismo consistirá en el proyecto de CodeBlocks con el programa funcionando y comentado,
respetando las reglas de estilo de la cátedra. La compilación no deberá arrojar mensajes de
error ni de warnings.
El proyecto deberá contar con la biblioteca descripta en la sección número dos, y se deberá
hacer uso de dichas funciones para resolver la lógica del programa.*/

int main()
{
    //ASIGNACION DE VARIABLES:

    float nro1 = 0,nro2 = 0,resultado;
    int opcion,flag = 1;

    //MENU:

    printf("SELECCIONE UNA OPCION DEL MENU:");
    printf("\n\nPRIMER NUMERO: %f",nro1);
    printf("\nSEGUNDO NUMERO: %f",nro2);
    printf("\n\n 1.SUMA");
    printf("\n 2.RESTA");
    printf("\n 3.MULTIPLICACION");
    printf("\n 4.DIVISION");
    printf("\n 5.FACTORIAL");
    printf("\n 6.SALIR");
    printf("\n OPCION:");

    //INICIO DE ALGORITMOS:

  while(flag == 1){
    scanf("%d",&opcion);


    //SWITCH:

    switch(opcion){
    case 1://SUMA
        printf("Ingrese el primer numero:");
        scanf("%f",&nro1);
        printf("Ingrese el segundo numero:");
        scanf("%f",&nro2);
        resultado = suma(nro1,nro2);
        printf("El resultado es:%.2f",resultado);
        flag = 0;
        break;
    case 2://RESTA
        printf("Ingrese el primer numero: ");
        scanf("%f",&nro1);
        printf("Ingrese el segundo numero: ");
        scanf("%f",&nro2);
        resultado = resta(nro1,nro2);
        printf("El resultado es:%.2f",resultado);
        flag = 0;
        break;
    case 3://MULTIPLICACION
        printf("Ingrese el primer numero: ");
        scanf("%f",&nro1);
        printf("Ingrese el segundo numero: ");
        scanf("%f",&nro2);
        resultado = mult(nro1,nro2);
        printf("El resultado es:%.2f",resultado);
        flag = 0;
        break;
    case 4://DIVISION
        printf("Ingrese el primer numero: ");
        scanf("%f",&nro1);
        printf("Ingrese el segundo numero: ");
        scanf("%f",&nro2);
        while(nro2==0){
            printf("ERROR REINGRESE EL SEGUNDO NUMERO!");
            scanf("%f",&nro2);
        }
        resultado = division(nro1,nro2);
        printf("El resultado es:%.2f",resultado);
        flag = 0;
        break;
    case 5://FACTORIAL:
        printf("Ingrese el primer numero: ");
        scanf("%f",&nro1);
        while(nro1<1){
            printf("ERROR REINGRESE EL SEGUNDO NUMERO!");
            scanf("%f",&nro1);
        }
        printf("Ingrese el segundo numero: ");
        scanf("%f",&nro2);
        while(nro2<1){
            printf("ERROR REINGRESE EL SEGUNDO NUMERO!");
            scanf("%f",&nro2);
        }

        resultado = factorial(nro1);
        printf("El resultado 1: %f",resultado);
        resultado = factorial(nro2);
        printf("\nEl resultado 2: %f",resultado);

        flag = 0;
        break;
    case 6://SALIR
        system("cls");
        flag = 0;
        break;
    default:
        printf("ERROR INGRESE UNA OPCION VALIDA:");
        break;
    }
  }
    return 0;
}











