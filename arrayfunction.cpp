#include<iostream>
using namespace std;
int myfun(int a[5])
{
    int k=0;
for(int i=0;i<5;i++)
{
     k=k+a[i];
}
return k;

}
int main()
{

int a[5]={10,20,30,40,50};

int k=myfun(a);
cout<<k;


}