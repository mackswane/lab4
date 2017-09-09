# lab4
//ques 6
#include <iostream>
//#include<cmath>

using namespace std;

void check()
     {
     int i,t,b,e;//,s=0,sum=0,f,d;
     cout<<"\nenter the begining no. =";
     cin>>b;
     cout<<"\nenter the ending no.=";
     cin>>e;

     //for prime
     while(b<e)
          {
          t=0;
          if(b==1)
            t=1;
     for(i=2;i<=b/2;++i)
        {
        if(b%i==0)
          t=1;
          break;
        }
     if(t==0)
     cout<<"\t"<<b;
     ++b;
         } 
 }
int main()
{
    check();
    return 0;
}
