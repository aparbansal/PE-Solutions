#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

int main()   	
{
	//Problem 12
	unsigned long long number = 0;
	while(1>0)
	{
		number++;
		unsigned long long sum = 0;
		int  num = 0;
		for(auto i=1; i<=number; i++)
		{
			sum += i;
		}
		for(auto i=1; i<sum; i++)
		{
			if(sum % i == 0)
			{
				//cout << i << endl;
				num++;
			}
		}
		cout << "The number of divisors for: " << sum << " are: " << num << endl; 
		if(num>=500)
		{
			cout << "THE TRIANGLE NUMBER IS: " << sum  << endl;
			break;
		}
	}
}
