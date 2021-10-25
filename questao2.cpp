#include <iostream>
using namespace std;

int fibo(int n,int b1,int b2,int Bo){

if (n>0){
 b1 = b2;
 b2 = Bo;
 Bo = b1 + b2;
 fibo(n-1,b1,b2,Bo);
 }
else if (n <= 0){
 cout<<Bo<<endl;
 }
 return(0);
}
 
int main () {
int x, f;

 cout<<"insira um número inteiro e positivo"<<endl;
 cin>>x;
 f=x-1;
 fibo(f,0,1,0);

 return(0);
}