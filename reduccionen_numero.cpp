#include <stdio.h>

using namespace std;

int main() {

    int n,r;
printf("Porfavor introduce un numero : \n");
scanf("%d", &n);

while (n>0)
{
    
    r= n%10;
     n= n/10;
    printf("El numero de la derecha es  %d\n", r);
}

return 0;
}