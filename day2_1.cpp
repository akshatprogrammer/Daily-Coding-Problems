#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		for(int sp=0;sp<n-1-i;sp++)
		{
			cout << " ";
		}
		for(int j=0;j<=i;j++)
		{
			cout << "1 ";
		}
		cout << endl;
	}
}
