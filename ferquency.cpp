#include<iostream>
using namespace std;

void fre(int n,int k)
{
   int c=0;
while (n!=0)
{
  if(n%10==k)
  {

    c=c+1;
  }
  n=n/10;
}

cout<<c;
}
int main()
{

int n=123242;
int k=2;
fre(n,k);
}








