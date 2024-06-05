#include <stdio.h>

int main() {



int numero=1, stop;
printf("Digite un numero: \n");
scanf("%d",&stop);

do{
    printf("%d \n",numero);
    numero++;
}
while(numero<=stop);

return 0;
}