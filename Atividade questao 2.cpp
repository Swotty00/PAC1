#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, sp, si;
    do
    {
        printf<<"Digite um numero inteiro diferente de 0: ";
        scanf>> "%d", &n;

        if (n%2==0)
        {
            sp = sp+n;
        }else{
            si = (si+n)/;
        }
    }while (n<0||n>0);

    cout<<"A soma dos numeros pares: %d\n", sp;
    cout<<"A soma dos numeros impares: %d\n", si;

    return 0;
}