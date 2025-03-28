#include<stdio.h>
#include<math.h>

int Cuadrado (int num);
void cuadradinho (int num);
void invertir(int *a, int *b);
void orden(int a, int b);

int Cuadrado (int num){
    int aux;
    aux = pow(num,2);
    return aux;
}

void cuadradinho (int num){
    int aux;
    aux = pow(num,2);
    printf("\n %d",aux);
}

void invertir(int *a, int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

void orden(int a, int b){
    int aux;
    if(b < a){
        invertir(&a,&b);
        printf("\nEl valor mas chico es: %d",a);
        printf("\nEl valor mas grande es: %d",b);
    }else{
        printf("\nEl valor mas chico es: %d",a);
        printf("\nEl valor mas grande es: %d",b);
    }
}

int main (){
    int num, aux, *punt,a,b;
    printf("Ingrese un número para ser elevado al cuadrado: ");
    scanf("%d",&num);
    punt = &num;
    aux = Cuadrado(num);
    printf("\nEl numero elevedo al cuadrado es: %d",aux);
    printf("\nLa direccion de memoria de la variable es %p", *punt);
    printf("\nEl contenido de la variable es: %d",*punt);
    printf("\nIngrese dos numeros para ser invertidos y ser ordenados entre si: ");
    scanf("%d %d",&a,&b);
    orden(a,b);
    return 0;
}