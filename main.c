#include <stdio.h>
#include <stdlib.h>

int main()
{
    //& operador de direccion
    //* operador de indireccion o inacceso


    //1. declaro puntero de tipo de dato a usar
    int* pEntero; //SIEMPRE PESA 4 BYTES - LO MISMO QUE UN ENTERO
    int* otroPuntero;

    //2. declaro variable donde guardar el dato
    int miEntero = 5;

    pEntero = &miEntero;

    printf("valor de miEntero: %d", *pEntero);

    *pEntero = 8;

    printf("\nvalor nuevo: %d", *pEntero);

    printf("\nvalor inicial de  otroPuntero:   %d", otroPuntero);

    otroPuntero = NULL;
    printf("\nvalor inicializado otroPuntero:   %d", otroPuntero);

    otroPuntero = pEntero;


    printf("\nvalor de  miEntero:   %d", miEntero);
    printf("\nvalor de *pEntero:    %d", *pEntero);
    printf("\nvalor de  pEntero:    %d", pEntero);
    printf("\nvalor de &miEntero:   %d", &miEntero);
    printf("\nvalor de &pEntero:    %d", &pEntero);
    printf("\nvalor de otroPuntero:    %d", otroPuntero);

    return 0;
}
