#include <stdio.h>

int main()
{
    int num = 0;
    int SP = 0, SI = 0, N = 0;
    while (1) {
        printf("Digite o valor:\n");
        scanf("%d", &num);
        if (num == 0) break;
        if (num % 2 == 0)
            SP += num;
        else {
            SI += num;
            N++;
        }
    }

    printf("Soma de pares %d\n", SP);
    printf("Media de impares %f", SI / (float) N);

    return 0;
}