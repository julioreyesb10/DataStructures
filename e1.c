//Estucturas de Datos - cairo

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int arreglo [12]={151,223,654,789,10,24,56,25,14,25,36,65};
    int suma = 0;
    int acumulador = 0;

    printf("Promedio anual de toneladas cosechadas = ");
    for(int i=0;i<12;i++)
    {
        suma = arreglo[i] + suma;
    }
    float promedio = suma/12;

    printf("%.2f toneladas\n",promedio);

    printf("Meses con mayor cosecha que el promedio = ");
    for(int i=0;i<12;i++)
    {
        if(arreglo[i]>promedio)
        {
            acumulador++;
        }
    }


    printf("%d meses mayores al promedio\n",acumulador);
    printf("Meses con menor cosecha que el promedio = %d meses\n",  12-acumulador);
    return 0;
}