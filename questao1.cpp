#include<iostream>
using namespace std;

int Majin_Boo(int m,int n ,int b,int v,int c);

int main()
{
    int m, n ,b, v, c;

    cout<<"Insira o número de doces da caixa 1"<<endl;
    cin>>m;
    cout<<"Insira o número de doces da caixa 2"<<endl;
    cin>>n;
    cout<<"Insira o número de doces da caixa 3"<<endl;
    cin>>b;
    cout<<"Insira o número de doces da caixa 4"<<endl;
    cin>>v;
    cout<<"Insira o número de doces da caixa 5"<<endl;
    cin>>c;

    Majin_Boo(m,n,b,v,c);

    return 0;
}

int Majin_Boo(int m,int n ,int b,int v,int c)
{
int doces[5];
int min, max, j;

 doces[0]=m;
 doces[1]=n;
 doces[2]=b;
 doces[3]=v;
 doces[4]=c;

  min = doces[0];
  max = doces[0];
  for(j = 0; j < 5; j++)
  {
    if(doces[j] < max)
    {
      min = doces[j];
    }
  }
  for(j = 0; j < 5; j++)
  {

    if(doces[j] > min)
    {
      max = doces[j];
    }
  }
  if(doces[0] == doces[1] == doces[2] == doces[3] == doces[4])
    {
     cout<<"Majin Boo terminou de comer seus doces!"<<endl;
       
     for(j = 0; j < 5; j++){
       cout<<"| "<<doces[j]<<" |";
    }
    }else{
      for( j= 0; j<5;j++)
    {
        if (doces[j] == max)
        {
        doces[j] -= min;
        Majin_Boo(doces[0],doces[1],doces[2],doces[3],doces[4]);
        }
    }
  }
return 0;
}