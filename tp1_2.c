#include <stdio.h>


int calcularCuadrado1(int numero);
void calcularCuadrado2(int numero);
void invertir(int a, int b);
void Orden( int a, int b);


void main (){

    int cuadrado1 = 2,cuadrado2 = 5;
    int valor1, valor2;
    char letra;

    cuadrado1 = calcularCuadrado1(cuadrado1);
    calcularCuadrado2(cuadrado2);

    printf("\n El cuadrado del primer numero ingresado es:%d", cuadrado1);
    

    //c) Al recibir una variable muestre por pantalla la dirección y el contenido de la variable
    printf("\nIngrese una letra");
    scanf("%c",&letra);
    printf("\nLa letra seleccionada es: %c y su direccion de memoria es:%p", letra,&letra);
    


    printf("\nOrden (a,b)");
    printf("\nIngrese el valor de a > 0:");
    scanf("%d",&valor1);
    printf("\nIngrese el valor de b > 0:");
    scanf("%d",&valor2);
    Orden(valor1,valor2);

    printf("\nInvertido (b,a)");
    printf("\nIngrese el valor de a > 0:");
    scanf("%d",&valor1);
    printf("\nIngrese el valor de b > 0:");
    scanf("%d",&valor2);
    invertir(valor1,valor2);
    


    
}
//a) Haga una función que devuelva el cuadrado de un número

int calcularCuadrado1(int numero){

    int resultado;

    resultado = (numero * numero);

    return (resultado);

}

// b) Haga la función anterior, pero devolviendo un tipo void

void calcularCuadrado2(int numero){

    int resultado; 
    resultado = (numero * numero);
    printf("\n El cuadrado del segundo numero ingresado es:%d",resultado);
}


//d) Dado dos parámetros de entrada, deberá invertir los valores entre ambos, tipo void

void invertir(int a, int b){

    printf("\n Par invertido:(%d,%d)", b, a);
    
}


//e) Dado dos parámetros de entrada, deberá devolverlos de forma ordenada, en el primer parámetro el menor y en el segundo el mayor. tipo void

void Orden( int a, int b){

    if (a < b)
    {
        printf("\nPar Ordenado (%d,%d)",a, b);
    }else
    {
        if (a > b)
        {
            printf("\n(%d,%d)",b,a);
        }
        
    }

    
}

