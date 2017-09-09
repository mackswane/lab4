# lab4
//ques 4
#include <iostream>

using namespace std;

void check()
     {
     int a;
     cout<<"\nenter a number=";
     cin>>a;
     if(a%2==0)
       cout<<"\nnumber is even";
     else if(a%2!=0)
       cout<<"\nnumber is odd";

     }
int main()
{
    check();
    return 0;
}
