#include <stdio.h>
#include <stdlib.h>

int main()
{
    //HASTA ACA VOY CON ESCALARES
    //& operador de direccion
    //* operador de indireccion o inacceso


    //1. declaro puntero de tipo de dato a usar
    int* pEntero; //SIEMPRE PESA 4 BYTES - LO MISMO QUE UN ENTERO
    int vec[3]={};
    int i;

    pEntero = vec;

    for(i=0 ; i<3 ; i++)
    {
        printf("\nIngrese valor para vec[%d]: ", i);
        scanf("%d", (pEntero+i));
    }


    for(i=0 ; i<3 ; i++)
    {
        printf("\nvec[%d]: %d", i, *(pEntero+i));
    }

    return 0;
}
