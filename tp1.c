#include <stdio.h>

void main (){

    //printf("Hola Mundo\n");

    int num1 = 13, *puntero;

    puntero = &num1;

    printf("\nEl contenido del puntero:%d",*puntero);
    printf("\n Direccion de memoria de la variable :%p",&num1);
    printf("\nLa direccion de memoria del puntero:%p",puntero);
    printf("\nEl tamaño de memoria utilizado por la variable:%zu bytes", sizeof(num1));


    
}