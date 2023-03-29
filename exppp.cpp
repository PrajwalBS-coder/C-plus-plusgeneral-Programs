
#include<bits/stdc++.h>
using namespace std;
void fun(string s,int n)
{
    int i,j;
    for (i=0;i<n;i++)
    {
    if(s[i-1] ==' ' || i==0) 
    {

     s[i]=toupper(s[i]);


    }
    else if(i > 0 && s[i-1] != ' '  && s[i]==' ')
    {
         s[i-1]=toupper(s[i-1]);

    }
    else if(i==n-1)
    {
        
        s[i]=toupper(s[i]);
    }




    }
cout<<s;

}


int main()
{
string str;
cout<<"enter string";
getline(cin,str);
int n=sizeof(str);
fun(str,n);




}


/*string like "My name is prajwal"
o/p is MY NamE IS PrajwaL*/