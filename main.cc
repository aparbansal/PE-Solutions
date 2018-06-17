#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

int main()   	
{
	//Problem 10
	vector <long long int> prime_container;
	auto number_primes=0, numbers=2, flag=0;
	while(numbers<2000000)
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
			prime_container.push_back(numbers);
		}
		numbers++;
		flag = 0;
 	}
	long long int sum = 0;
	cout << "Prime nos are: " << endl;
	for(auto i=0; i<prime_container.size(); i++)
	{
		cout <<  prime_container[i] << endl;
		sum += prime_container[i];		
	}
	cout << "The sum of the prime nos. is: " << sum << endl;
}
