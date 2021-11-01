#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array [10] = {1,1,2,2,3,4,5,5,6,8};
    int new_array [10];
    for (int i = 0; i < 10; i++)
    {
        new_array[i]= 0;
    }
    for(int i = 0; i<10; i++)
    {
        if(array[i+1] > array[i])
        {
            new_array[i]=array[i];
        }
        
        printf("Nuevo arreglo celda[%d] = [%d]\n", i, new_array[i]);
    }
    return 0;
}