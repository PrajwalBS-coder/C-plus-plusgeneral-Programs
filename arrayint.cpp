#include<iostream>
using namespace std;
int main()
{

int a[] ={1,2,3,4,5,6,7,8};
//cout<<a[2];
for (int i=0;i<sizeof(a)/sizeof(a[1]);i++)
{
        cout<<endl<<a[i];
}


}