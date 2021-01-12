#include<iostream>
#include<malloc.h>
using namespace std;
void swap(int *a,int *b)  // swapping positions of 2 elements.
{
	int t = *a;
	*a = *b;
	*b = t;
}
void sortAscending(int a[],int n)
{
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n-i-1;j++)
    {
      if(a[j]>a[j+1])      // checking if the next element is smaller or not.
      swap(&a[j],&a[j+1]);
    } 
  }
  for(int i=0;i<n;i++)
  {
    cout << a[i] << " ";
  }
  cout << endl;
}
void sortDescending(int a[],int n)
{
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n-i-1;j++)
    {
      if(a[j]<a[j+1])    // checking if the next element is greater or not.
      swap(&a[j],&a[j+1]);
    } 
  }
  for(int i=0;i<n;i++)
  {
    cout << a[i] << " ";
  }
  cout << endl;
}
int main()
{
int n;
cin >> n;
int *a;
a = (int *)malloc(sizeof(int)*n);
for(int i=0;i<n;i++)
{
cin >> a[i];
}
sortAscending(a,n); // calling ascending function.
sortDescending(a,n); // calling descending function.
return 0;
}
/*
Time Complexity = O(n^2)
Space Complexity = O(1)
By : Akshat Jain
*/
