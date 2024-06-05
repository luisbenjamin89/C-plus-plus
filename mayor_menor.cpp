#include <stdio.h>
#include <math.h>


int main() {

int n,n2,n3;

printf("Digite primer numero: ");
scanf("%d",&n);

printf("Digite segundo numero: ");
scanf("%d",&n2);

printf("Digite tercer numero: ");
scanf("%d",&n3);

if(n>n2 && n>n3){
printf("El mayor es: %d \n",n);
}

if(n2>n && n2>n3){
printf("El mayor es: %d \n",n2);
}

if(n3>n && n3>n2){
printf("El mayor es: %d \n",n3);
}

if(n==n2 && n2==n3){
printf("Todos son iguales \n");
}

if(n==n2 && n2!=n3){
printf("El mayor es: %d \n",n);
}

if(n==n3 && n3!=n2){
printf("El mayor es: %d \n",n);
}

if(n2==n3 && n3!=n){
printf("El mayor es: %d \n",n2);
}




return 0;
}