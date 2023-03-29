#include<iostream>
using namespace std;
int main()
{
string a,b;
cout<<"Entre srings"<<endl;
cin>>a>>b;
//cout<<a+b;
string c=a+b;
int k=c.length();//we can also use size() insted of length()
cout<<k<<endl;
cout<<a.append(b);



}