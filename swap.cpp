#include<iostream>
using namespace std;
void swap(int* a,int* b)
{
int temp=*a;
*a=*b;
*b=temp;
//cout<<*a<<*b;

}

int main()
{

int a=10,b=20;
cout<<"Before swap"<< a<<"\t"<<b;

cout<<endl<<"After Swap"<<endl;
swap(&a,&b);
cout<<a<<"\t"<<b;

}
