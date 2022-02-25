//Tail Recursive function for sum of digits
#include<iostream>
using namespace std;
int func(int n,int sum=0)
{	if (n==0)
	{
		return sum;
	}
	/*int q=n/10;
	//int r=n%10;
	n=q;*/
	sum=sum+n%10;
	return func(n/10,sum);
}
int main()
{
	int n=123321;
	cout<<func(n);
}
