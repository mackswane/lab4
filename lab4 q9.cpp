# lab4
//ques 9
#include<iostream>
using namespace std;
void print_perfect(int a,int b)
{
  int fc,cp,x,y,sum;
  for(int x=a;x<=b;x++)
  {
    cp=x;
    y=x;
    sum=0;
    for(int i=1;i<=y/2;i++)
    {
      if(y%i==0)
      {
        sum=sum+i;
      }
    }
    if(sum==cp)
      cout<<cp<<"	";
  }
}
int main()
{
  int i,n;
  cout<<"\nEnter starting no. : ";
  cin>>i;
  cout<<"\nenter ending no.";
  cin>>n;
  print_perfect(i,n);
  return 0;
}
