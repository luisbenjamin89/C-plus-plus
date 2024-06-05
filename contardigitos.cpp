#include <stdio.h>

using namespace std;

int main() {

int n,cont=0,r;
printf("Porfavor introduce un numero : \n");
scanf("%d", &n);

while (n>0)
{

    cont++;
    n= n/10;
}

printf ("El numero  tiene : %d digitos \n ",cont);

    return 0;

}