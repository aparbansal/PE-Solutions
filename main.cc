#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

int main()   	
{
	//Problem 6
	auto sum_of_squares=0, square_of_sum=0;
	for(int i=0; i<101; i++)
	{
		sum_of_squares = sum_of_squares + i*i;
		square_of_sum  += i; 
	}
	square_of_sum = square_of_sum*square_of_sum;
	cout << "The difference is:" << -sum_of_squares + square_of_sum << endl;
}
