//Funtion to find sum of digits.(Recursion)
#include<iostream>
using namespace std;
int sum_digits(int n)
{
	if(n<10) //base case 
	{
	return n;
	}
	return sum_digits(n/10)+n%10;
}
//Driver code
int main()
{
	int n=123456789;
	cout<<sum_digits(n);
	return 0;
}

