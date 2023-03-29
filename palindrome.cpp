#include<iostream>
using namespace std;

void pal(int n)
{int k,rev=0,l=n;
while(n!=0)
{
k=n%10;
rev=(rev*10)+k;
n=n/10;
}

if(l==rev)
{
cout<<"pal"<<rev;

}


else 
{
cout<<"nopal"<<rev<<n;

}



}
int main()
{
int n=121;
pal(n);



}