/*
HOMEWORK
escribir funciones cargar y mostrar
1. recibe notacion array y maneja con notacion de array
2. recibe notacion array y maneja con aritmetica de punteros
3. recibe notacion de puntero y maneja con notacion de array
4. recibe notacion de puntero y maneja con notacion de puntero
*/

#include <stdio.h>
#include <stdlib.h>

#define CANT 3

void cargarVector(int* vector, int limite);
void mostrarVector(int* vector, int limite);

int main()
{
    //HASTA ACA VOY CON ESCALARES
    //& operador de direccion
    //* operador de indireccion o inacceso


    //1. declaro puntero de tipo de dato a usar
    //int* pEntero; //SIEMPRE PESA LO MISMO QUE UN ENTERO (4 BYTES)
    int vec[CANT]={};

    //cargarVector(pEntero, CANT);
    //mostrarVector(pEntero, CANT);

    cargarVector(vec, CANT);
    mostrarVector(vec, CANT);


    return 0;
}

void cargarVector(int* vector, int limite)
{
    int i;

    for(i=0 ; i<limite ; i++)
    {
        printf("\nIngrese valor para vec[%d]: ", i);
        scanf("%d", vector+i);
    }
}

void mostrarVector(int* vector, int limite)
{
    int i;

    for(i=0 ; i<limite ; i++)
    {
        printf("\nvec[%d]: %d", i, *(vector+i));
    }
}
