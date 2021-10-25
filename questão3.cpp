#include <iostream>
#include <vector>
using namespace std;

void matrix_fr(int l, int c, int *matrix);

int main()
{
    int l, c;
    cout<<"Defina o valor de linhas: ";
    cin>>l;
    cout<<"Defina o valor de colunas: ";
    cin>>c;

    int matrix[l][c];

    for(int x=0; x<l; x++)
    {
        for(int y=0; y<c; y++)
        {
        cout<<"Defina a posicao do elemento: ";
        cin>>matrix[x][y];
        } 
    }

    matrix_fr(l, c, *matrix);

    return 0;
}

void matrix_fr(int l, int c, int *matrix)
{
    vector<int> vec(256, 0);

    for(int x=0; x<l; x++)
    {
        for(int y=0; y<c; y++)
        {
            vec[*((matrix + x*l) + y)]+=1;
        } 
    }

    for(int i=0; i<256; i++)
    {
        if (vec [i]==0) continue;
        cout<<"O numero "<<i<<" aparece "<<vec[i]<<" vezes\n";
    }
}
