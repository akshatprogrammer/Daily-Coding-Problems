#include<iostream>
#include<malloc.h>        // std lib to include malloc
using namespace std;
int main()
{
  int n;
  cin >> n;    // taking size of array
  int *a;
  a = (int *)malloc(sizeof(int)*n);    // allocating size to array dynamically
  for(int i=0;i<n;i++)
  {
    cin >> a[i];    // inputting array.
  }
  for(int i=0;i<n/2;i++)
  {
    a[n-i-1] = a[i];       // swapping elements 
  }
  for(int i=0;i<n;i++)
  {
    cout << a[i];    // printing array.
  }
}
/*
Time Complexity = O(n)
Space Complexity = O(1)
By : Akshat Jain
*/
