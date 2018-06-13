#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

int main()   	
{
	//Problem 7
	auto number_primes=0, numbers=2, flag=0;
	while(1>0)
	{
		for(auto i=2; i<numbers; i++)
		{
			if(numbers%i==0)
			{
				flag=1;	
				break;
			}
		}
		if(flag==0)
		{
			number_primes++;
			if(number_primes==10001)
			{
				cout << "The prime number is: " << numbers << endl;
				return 0; 
			} 
		}
		numbers++;
		flag = 0;
	}
}
