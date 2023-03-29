#include<iostream>
using namespace std;
int getSum(int a, int b)
{
int bias = 3;
int sum;
auto lf = [=](int x, int y) { return x + y; };
 
// Calculate the sum using the lambda function
sum = lf(a, b);
 
return(sum);
} 

int main()
{

int a =8;
cout<<a<<sizeof(a)<<endl;
double b;
b=double(a);
cout<<a<<sizeof(b);

cout<<getSum(8,9);
}