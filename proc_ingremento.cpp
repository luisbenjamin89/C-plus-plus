
#include <stdio.h>

using namespace std;

void metodo ( int numero, int ingremento ){
   int resultado  = numero * ingremento ;
   printf("Numero despues del ingremento: % d  \n",resultado);
}
int main() {
int numero,ingremento;
 printf("ingrese el  numero: ");
 scanf("%d",&numero);
  printf("ingrese en cuanto quiere ingrementar el  numero: ");
 scanf("%d",&ingremento);
 printf("Numero antes del ingremento:  % d \n",numero);

 metodo(numero,ingremento);

}