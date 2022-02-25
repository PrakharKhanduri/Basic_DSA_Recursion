//Funtion to find substing of a given string using recursion.
#include<iostream>
using namespace std;
void printSub(string str,string cur=" ",int index=0)
{
	if (index==str.length())
	{
		cout<<cur<<"\n";
		return;
	}
	printSub(str,cur,index+1);//Do not include the char at index
	printSub(str,cur+str[index],index+1);//include the char at index
}
//Driver code
int main()
{
	printSub("ABCD");
	return 0;
}
