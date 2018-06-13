#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

int main()   	
{
//Problem 5
unsigned long long num = 1, i = 1;
unsigned flag = 0;
while(i>0)
{
	flag = 0;
	for(auto j=1; j<21; j++)
	{
		if(i%j!=0)	flag = 1;
	}
	if(flag == 0)
	{
		num = i;
		break;
	}
	i++;
}
cout << num << endl;
}
