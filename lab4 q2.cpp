# lab4
//ques 2
#include <iostream>

using namespace std;

void circle()
     {
     float r,d,a,c;
     cout<<"\nenter radius of circle";
     cin>>r;
     d=2*r;
     c=2*3.14*r;
     a=3.14*r*r;
     cout<<"\ndiameter="<<d;
     cout<<"\ncircumference="<<c;
     cout<<"\narea="<<a;
     }
int main()
{
    circle();
    return 0;
}
