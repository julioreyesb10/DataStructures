//Algorithm to count lowercase caracter in a string entered by user

#include <stdlib.h>
#include <stdio.h>

int main()
{

    char cadena[24];
    char caracter = 97;
    int a = 0;
    int contador2=0;
    char contador = 97;
    int contador_car [27];
    for(int i = 0; i < 28 ; i++)
    {
        contador_car[i] = 0;
    }
    int array_min [26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    printf("Ingrese un string\n");
    scanf("%s", cadena);
    printf("%s\n", cadena);
    for(int i=0; i<26 ; i++)
    {
        for(int j=0; j<24; j++)
        {
           if(array_min[i] == cadena [j])
           {
               contador_car[i] ++;
           } 
        }
    printf("%c = %d veces\n", array_min[i], contador_car[i]);
    caracter++;    
    }
    return 0;
}