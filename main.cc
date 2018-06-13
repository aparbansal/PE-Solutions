#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

int main()   	
{
	auto num = 0;
	for(auto i=999; i>0; i--)
	{
		for(auto j=999; j>0; j--)
		{
			auto prod=0, rev_prod=0;
			prod = i*j;
			while(prod != 0)
			{
				auto remainder = prod%10;
				rev_prod = rev_prod*10 + remainder;
				prod /= 10;
			}	
			/*auto s = to_string(prod);*/
			if(i*j == rev_prod && i*j>num)
			{
				num = i*j;
				cout << "The number is: " << i << " x " << j << " = " << i*j << endl;
			}
		}
	}
	cout << "The answer is: " << num << endl;
}
