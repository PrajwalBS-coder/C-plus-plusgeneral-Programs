#include<iostream>
using namespace std;

int main()
{

string a[4]={"a","b","c","d"};



//cout<<endl<<a[0];
//cout<<endl<<a[1];
for (int i=0;i<sizeof(a)/sizeof(a[0]);i++)
{
    cout<<endl<<a[i];
}
/*for (int i=0;i<5;i++)
{
    cout<<endl<<a[i];
}*/
cout<<sizeof(a)/sizeof(a[0]);
}
