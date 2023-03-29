#include<iostream>
using namespace std;
struct stu
{
   int no;
   string na;
   char g;
};
int main()
{
stu s1,s2;
s1.no=1;
s1.na="Amin";
s1.g='A';
cout<<s1.no<<endl<<s1.na<<endl<<s1.g;
s2.no=2;
s2.na="Jhon";
s2.g='B';
cout<<endl<<s2.no<<endl<<s2.na<<endl<<s2.g;
}