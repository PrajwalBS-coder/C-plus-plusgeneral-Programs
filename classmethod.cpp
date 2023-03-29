#include<iostream>
using namespace std;
class car{


    public:
    int n1,n2;
    int add(int a,int b)
    {
       return a+b; 
    }
    int sub(int a,int b);

};
int car::sub(int a,int b)
{

return a-b;

}

int main()
{

car c1;
c1.n1=10;
c1.n2=20;
cout<<c1.add(c1.n1,c1.n2)<<endl;
cout<<c1.sub(c1.n1,c1.n2);

}