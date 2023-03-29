#include<iostream>
using namespace std;
int sumof(int n)
{
while(n!=0)
{
   return n+sumof(n-1);
}
return 0;
}
int main()
{


cout<<sumof(10);


}