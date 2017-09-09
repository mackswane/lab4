# lab4
//ques 5
#include <iostream>
#include<cmath>

using namespace std;

void check()
     {
     int n,i=1,s=0,sum=0,f,d,t=0;
     cout<<"\nenter a number=";
     cin>>n;

  //for prime number
  if(n==1)
    t=1;
  else
  for(i=2;i<=n/2;i++)
     {
     if(n%i==0)
       t=1;
       break;
     }
 if(t==0)
   cout<<"\n prime no.";
 else
   cout<<"\n not prime";

  //for armstrong number
  f=n;
    while(n!=0)
         {
         d=n%10;
         sum=sum+pow(d,3);
         n=n/10;
         }

    if(sum==f)
      cout<<"\narmstrong no.";
    else
    cout<<"\nnot armstrong ";

  //for perfect number
  while(i<=n/2){
      if(n%i==0)
           s=s+i;
          i++;
  }
  if(s==n)
     cout<<"\nnumber is a perfect number";
  else
     cout<<"\nnumber is not a perfect number";
 }
int main()
{
    check();
    return 0;
}
