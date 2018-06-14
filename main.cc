#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

int main()   	
{
	//Problem 8
	//auto a=0, b=0, c=0;
	for(auto i=1; i<1001; i++)
	for(auto j=1; j<1001; j++)	
	for(auto k=1; k<1001; k++)
	{
		if(i+j+k==1000 && (i*i + j*j == k*k))
		{
			printf("I won't lie to you. This is what we found.\n %d x %d x %d = %d\n", i, j, k, i*j*k);
			return 0;
		}
	}
}
