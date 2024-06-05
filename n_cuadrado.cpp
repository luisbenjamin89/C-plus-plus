#include <stdio.h>
#include <string>
using namespace std;

int cuadrado (int numero){
 
    return  numero*numero;
}
int main() {
    int numero;
    printf("introduzca numero: \n");
    scanf("%d", &numero);
printf ("El cuadrado del numero %d es :%d \n ",numero,cuadrado(numero)) ;
}