#include <stdio.h>

using namespace std;
void msj(int a ,int b){
int suma = a+b;
printf ("*********************\n");
printf("Resultado = % d \n",suma);
printf("*********************\n");

}

int main() {
 int a,b;

 printf("ingrese el primer numero: ");
 scanf("%d",&a);
 printf("ingrese el segundo numero: ");
 scanf("%d",&b);
 msj(a,b);

    return 0;
}
