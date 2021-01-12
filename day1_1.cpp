#include<iostream>
#include<malloc.h>
using namespace std;
void swap(int *a,int *b)
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
      if(a[j]>a[j+1])
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
      if(a[j]<a[j+1])
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
sortAscending(a,n);
sortDescending(a,n);
return 0;
}
