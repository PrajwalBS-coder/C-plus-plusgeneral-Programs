#include<iostream>
using namespace std;
class car
{
 private: int c;
public:
int x,y;
void add(int x,int y)
{
c=x+y;
cout<<c;
}
};
int main()
{

car c1;
c1.x=10;
c1.y=20;
c1.add(c1.x,c1.y);

}