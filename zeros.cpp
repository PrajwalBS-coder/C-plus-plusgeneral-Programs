#include<iostream>
using namespace std;
void move_zeros_to_left(int A[], int n) {
int i,b[10];
        for (i=0;i<n;i++)
        {
            if (A[i]==0)
            {
                b[i]=A[i];


            }



        }
         
  int k=sizeof(b)/100;
  for (i=0;i<n;i++)
  {
if(A[i]!=0)
{
    b[k+1]=A[i];

  }

  }  
  cout << endl<< "After Moving Zeroes to Left"<< endl;
                for(int i=0 ; i<4; i++) {
                 cout << b[i];
                  cout << ", ";
   
  /*if (n < 1) return;
  
  int write_index = n - 1;
  int read_index = n - 1;

  while(read_index >= 0) {
    if(A[read_index] != 0) {
      A[write_index] = A[read_index];
      write_index--;
    }

    read_index--;
  }

  while(write_index >= 0) {
    A[write_index] = 0;
    write_index--;
  }*/


}
}
int main() {
  int v[] = {1, 10, 20, 0, 59, 63, 0, 88, 0};
  int n = sizeof(v) / sizeof(v[0]);
  
  cout << "Original Array" <<endl;
  
  for(int x=0 ; x<n; x++) {
    cout << v[x];
    cout << ", ";
  }  
  
  move_zeros_to_left(v, n);
  
 
}  