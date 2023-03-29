#include<iostream>
using namespace std;
class car
{
public:
int no,ml;
public:
void horn()
{

    cout<<"ponk poink";
}
};
class ford:public car{
public :
string na="FORD MUSTANG";
void horn()
{
cout<<"hello side please";
    
}

};
int main()
{
 ford c1;
 c1.ml=40;
 c1.no=456;
 cout<<c1.ml<<c1.no<<c1.na;
 c1.horn();





}