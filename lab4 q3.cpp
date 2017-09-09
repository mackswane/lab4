# lab4
//ques 3
#include <iostream>

using namespace std;

void findn()
     {
     float a,b;
     cout<<"\nenter 1st no.=";
     cin>>a;
     cout<<"\n enter 2nd no.=";
     cin>>b;
     if(a>b)
       cout<<"\nmaximum no. ="<<a<<"  minimum no. ="<<b;
     else
       cout<<"\nmaximum no. ="<<b<<"  minimum no. ="<<a;
     }
int main()
{
    findn();
    return 0;
}
