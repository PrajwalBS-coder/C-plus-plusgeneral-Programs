#include<iostream>
using namespace std;
void dup(int& a,int& b,int& c)
{
a*=2;
b*=2;
c*=2;



}
int main()
{

int x=1,y=2,z=3;
dup(x,y,z);
cout<<x<<y<<z;



}