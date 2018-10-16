/*
 * Programa para poder sumas matrices dependiendo de el numero de filas y columnas que pida
 * el usuario
 *
 * Autora: Yasmin Alvarado Lee
 * Fecha: 15 de octubre del 2018
 * correo: yazminalvlee@gmail.com
 */

#include <stdio.h>

int main()

{

    int a[10][10];
    int b[10][10];
    int c[10][10];
    int k;
    int e;
    int i;
    int n;
    //Le pedimos al usuario las columnas y filas
    printf("Cuantas columnas y filas quieres?");
    scanf("%i",&i);

    //NUMEROS MAYORES A 1 Y MENORES O IGUAL A 10
    while ((i<=1) || (i>=10))
    {
        printf ("Invalid input. Please type a number greater than 1.\n");
        scanf ("%i", &i);
    }
    n=i;

    printf("\nPrimera matriz?:\n");
//VALORES DE LAS 2 DIFERENTES MATRICES PARA HACER SU SUMA
    for(k=0; k<i; ++k)
        for(e=0; e<n; ++e)
            scanf("%i",&a[k][e]);

    printf("\nSegunda matriz?:\n");

    for(k=0;k<i;++k)
        for(e=0; e<n; ++e)
            scanf("%i",&b[k][e]);

    printf("\nLa suma de las matrices es:\n");
//OPERACIONES
    for(k=0;k<i;++k)
    {
        for(e=0; e<n; ++e)
        {
            c[k][e]=a[k][e]+b[k][e];
            printf("%i ",c[k][e]);
        }

        printf("\n");
    }

    return 0;

}