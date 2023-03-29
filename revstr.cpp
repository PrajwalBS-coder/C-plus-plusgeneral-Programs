#include<iostream>
using namespace std;

void rev(string s)
{
    int n=s.length();
    for(int i=n;i>=0;i--)
    {

        cout<<s[i];
    }

}

int main()
{
rev("Amin");

}