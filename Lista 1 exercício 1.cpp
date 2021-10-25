#include <iostream>
#define PI 3.14159
using namespace std;

int main()
{
    double r, p, s;
    printf ("Informe o valor do raio:");
    scanf ("%d", &r);

    p= 2*PI*r;
    s= PI*r*r;

    printf ("O circulo de raio %d", r);
    printf (" tem %d de perimetro e %d de area.", p, s);

    return 0;
}