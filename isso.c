#include <stdio.h>

int main()
{
    int num, N, sp=0, si=0;
    double mi;

    do
    {
        printf("Declare um numero: ");
        scanf ("%d", &num);
        printf ("Informe a quantidade de numeros impares que deseja declarar: ");
        scanf ("%d", &N);

        if (num%2==0)
        {
            sp=sp+num;
        }else{
            si=si+num;
            mi=si/N; 
        }
    }while(num!=0);

    printf ("A soma dos numeros pares eh: %d\n", sp);
    printf ("A media dos numeros impares eh: %d\n", mi);

    return 0;
}