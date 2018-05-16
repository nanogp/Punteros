#include <stdio.h>
#include <stdlib.h>

#define CANT 3

void cargarVector1(int vector[], int limite);
void mostrarVector1(int vector[], int limite);

void cargarVector2(int vector[], int limite);
void mostrarVector2(int vector[], int limite);

void cargarVector3(int* vector, int limite);
void mostrarVector3(int* vector, int limite);

void cargarVector4(int* vector, int limite);
void mostrarVector4(int* vector, int limite);

int main()
{
    //HASTA ACA VOY CON ESCALARES
    //& operador de direccion
    //* operador de indireccion o inacceso


    //1. declaro puntero de tipo de dato a usar
    //int* pEntero; //SIEMPRE PESA LO MISMO QUE UN ENTERO (4 BYTES)
    int vec[CANT]={};

    //cargarVector1(pEntero, CANT);
    //mostrarVector1(pEntero, CANT);

    cargarVector1(vec, CANT);
    mostrarVector1(vec, CANT);

    cargarVector2(vec, CANT);
    mostrarVector2(vec, CANT);

    cargarVector3(vec, CANT);
    mostrarVector3(vec, CANT);

    cargarVector4(vec, CANT);
    mostrarVector4(vec, CANT);


    return 0;
}


//1. recibe notacion array y maneja con notacion de array
void cargarVector1(int vector[], int limite)
{
    int i;

    for(i=0 ; i<limite ; i++)
    {
        printf("\nIngrese valor para vec[%d]: ", i);
        scanf("%d", &vector[i]);
    }
}

void mostrarVector1(int vector[], int limite)
{
    int i;

    for(i=0 ; i<limite ; i++)
    {
        printf("\nvec[%d]: %d", i, vector[i]);
    }
}

//2. recibe notacion array y maneja con aritmetica de punteros
void cargarVector2(int vector[], int limite)
{
    int i;

    for(i=0 ; i<limite ; i++)
    {
        printf("\nIngrese valor para vec[%d]: ", i);
        scanf("%d", vector+i);
    }
}

void mostrarVector2(int vector[], int limite)
{
    int i;

    for(i=0 ; i<limite ; i++)
    {
        printf("\nvec[%d]: %d", i, *(vector+i));
    }
}

//3. recibe notacion de puntero y maneja con notacion de array
void cargarVector3(int* vector, int limite)
{
    int i;

    for(i=0 ; i<limite ; i++)
    {
        printf("\nIngrese valor para vec[%d]: ", i);
        scanf("%d", &vector[i]);
    }
}

void mostrarVector3(int* vector, int limite)
{
    int i;

    for(i=0 ; i<limite ; i++)
    {
        printf("\nvec[%d]: %d", i, vector[i]);
    }
}

//4. recibe notacion de puntero y maneja con notacion de puntero
void cargarVector4(int* vector, int limite)
{
    int i;

    for(i=0 ; i<limite ; i++)
    {
        printf("\nIngrese valor para vec[%d]: ", i);
        scanf("%d", vector+i);
    }
}

void mostrarVector4(int* vector, int limite)
{
    int i;

    for(i=0 ; i<limite ; i++)
    {
        printf("\nvec[%d]: %d", i, *(vector+i));
    }
}

