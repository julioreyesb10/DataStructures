#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float promedio;
    int calificaciones[10];

    printf("ingrese los promedios en orden:\n");
    for(int i = 0; i<10 ; i++)
    {
        scanf("%d",calificaciones[i]);
    }
    
    return 0;
}