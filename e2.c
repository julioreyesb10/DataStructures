#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float promedio = 0;
    int calificaciones[10];
    int aprobado = 0;
    int reprobado = 0;
    printf("ingrese los promedios en orden:\n");
    for(int i = 0; i<10 ; i++)
    {
        scanf("%d",&calificaciones[i]);   
        promedio = calificaciones[i] + promedio;
        if(calificaciones[i] >= 60)
        {
            aprobado ++;
        }
        else{
            reprobado++;
        }
    }
    promedio = promedio/10;
    printf("Promedio = %f\n", promedio);
    printf("Aprobados = %d\n", aprobado);
    printf("Reprobados = %d\n", reprobado);
    return 0;
}