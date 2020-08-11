#include<iostream>
using namespace std;
int main()
{
int x,y,*a,*b;
cin>>x>>y;
a=&x;
b=&y;
int temp=0;
temp=*a;
*a=*b;
*b=temp;
cout<<x<<y;
return 0;
}
