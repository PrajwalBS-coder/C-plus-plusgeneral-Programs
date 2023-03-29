#include<iostream>
using namespace std;
int main()
{

string a="Amin";
string b = *(&a);
cout<<a<<endl<<b<<endl;
cout<<&a;
string* c;
c=&a;
cout<<endl<<*c;
*c="Jhon";
cout<<endl<<a;


}