#include<iostream>
using namespace std;
int main()
{
int a[3][3],c=0;
for(int i=0;i<3;i++)
{


    for(int j=0;j<3;j++)
    {
     a[i][j]=c++;


    }
}

for(int i=0;i<3;i++)
{


    for(int j=0;j<3;j++)
    {
    cout<<a[i][j];


    }
}






}