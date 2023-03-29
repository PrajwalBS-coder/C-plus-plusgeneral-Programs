#include<iostream>
using namespace std;
int add(int a,int b){
    return a+b;
}
int add(int a,int b,int c){
    return a+b+c;
}
double add(double a, double b)
{
return a+b;


}
int main()
{
int k=add(1,2);
double l=add(1.12,2.12);
int j=add(1,2,3);
cout<<endl<<k<<endl<<l<<endl<<j;



}