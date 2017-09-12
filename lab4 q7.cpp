# lab4
//ques 7
#include<iostream>
using namespace std;

//for factorial
int factorial(int n)
{
 int f=1;
 while(n>0){
      f=f*n;
      n=n-1;
 }
return f;
}

//to check
void strong(int b,int e)
{
 int d,N,sum;
 while(b<=e)
      {
      sum=0;
      N=b;
      while(N!=0){
           d=N%10;
           sum+=factorial(d);
           N=N/10;
      }
      if(sum==b)
      cout<<" "<<sum;
      b++;
 }
}

int main()
{
 int b,e;
 cout<<"\n enter starting no.=";
 cin>>b;
 cout<<"\n enter ending no.= ";
 cin>>e;
 strong(b,e);
 return 0;
}
