# lab4
//ques 8
#include<iostream>
#include<cmath>
using namespace std;
void print_armstrong(int a,int b)
{
  int arm,d,cp,y;
  for(int x=a;x<=b;x++)
  {
    cp=x;
    y=x;
    arm=0;
    while(y!=0)
    {
      d=y%10;
      arm=arm+pow(d,3);
      y=y/10;
    }
    if(arm==cp)
      cout<<cp<<"	";
  }
}
 
int main()
{
  int i,n;
  cout<<"\nEnter starting n0. : ";
  cin>>i;
  cout<<"\nenter ending no. ";
  cin>>n;
  print_armstrong(i,n);
  return 0;
}
