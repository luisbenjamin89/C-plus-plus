#include <stdio.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int n, num_secreto;
    srand( time(nullptr));
    num_secreto = 1+ rand() %5 ;
  

    do
    {
        printf("****por favor introduce un numero entre 1 y 5 para enmpezar el juego :\n ");
        scanf("%d", &n);

        if (num_secreto < n)
        {
            printf("haz perdido el numero secreto es menor que : %d intentalo nuevamente :\n ", n);
        }
        if (num_secreto > n)
        {
            printf("haz perdido el numero secreto es mayor que : %d intentalo nuevamente \n", n);
        }

    } while (n != num_secreto);
    printf("Haz ganado felicidades\n");
    

        return 0;
}