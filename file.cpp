#include<iostream>
#include<fstream>
using namespace std;
int main()
{
string myxt;
/*ofstream myfile("hello.txt");
myfile<<"Hello Hows the josh";*/
ifstream myreadfile("hello.txt");

while(getline(myreadfile,myxt))
{
   cout<<myxt;
}


//myfile.close();


}