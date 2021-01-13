#include<iostream>
#include<math.h>
using namespace std;
void fibbonaci(int n)
{
	int start0 = 0,start1=1;
	cout << start0 << " ";
	for(int i=1;i<n;i++)
	{
		cout << start1 << " ";
		start1 = start0 + start1;
		start0 = start1 - start0;
	}
	cout << endl;
}
void armstrong(int n)
{
	int num = n;
	int c=0;
	int r,result=0;
	while (num != 0) {
        num /= 10;
        c++;
	}
	num = n;
	while(num!=0){
	r = num % 10;
	int p;
	p = pow(r,c);
	result += p;
	num /= 10;
}
	 if (result == n)
      cout << n << " is an Armstrong number.\n";
   else
      cout << n << " is not an Armstrong number.\n";
   
}
void palindrome(int n)
{
	int digit,num=n,rev=0;
	do
     {
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
     } while (num != 0);



     if (n == rev)
         cout << " The number is a palindrome.";
     else
         cout << " The number is not a palindrome.";
}
int main()
{
	cout << "Enter the range of fib. series -> ";
	int fib_n;
	cin >> fib_n;
	fibbonaci(fib_n);
	cout << "Enter the number to check it is armstrong or not -> ";
	int arm_n;
	cin >> arm_n;
	armstrong(arm_n);
	cout << "Enter the number to check it is palindrome or not -> ";
	int palin_n;
	cin >> palin_n;
	palindrome(palin_n);
	
	return 0;
}
