#include<stdio.h>

int main (){
    printf("Hola mundo\n");
    int x=21, *puntero, tama;
    puntero = &x;
    printf("El contenido al que apuntael puntero es: %d\n", *puntero);
    printf("La direccion de memoria a la que apunta el puntero es: %p \n",*puntero);
    printf("La direccion de memoria del puntero es: %p\n",&puntero);
    tama = sizeof(int);
    printf("El tamaño de la variable es de %d",tama);
    return 0;
}