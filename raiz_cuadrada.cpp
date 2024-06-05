
#include <stdio.h>
#include <math.h>


int main() {

int n;
printf("Digite um numero: ");
scanf("%d", &n);
    
if (n >0) {
printf("La raiz cuadrada de %d es  %f \n" , n, sqrt(n) );
}
else

printf("debe ingresar un numero mayor a 0 \n");
return 0;
}