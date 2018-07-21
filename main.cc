#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

int main()   	
{
	//Proving Probability
	int array[4] = {0,0,10,10};
	int n1, n2;
	int positiveOutcome=0, sampleSpace=0;
	
	srand(time(NULL));
	
	for(unsigned long long i=0; i<1000000000000; i++)
	{
		n1 = rand() % 4;
		n2 = rand() % 4;
		while(n2==n1)				n2 = rand() % 4;
		if(array[n1]==10 && array[n2]==10)	positiveOutcome++;
		sampleSpace++;
	}
	cout << "The probability of death by back-to-back hot pepper consumption is: " << (float) (positiveOutcome*1.0000000/sampleSpace) << endl;	
	cout << "For the geeks :(  -> Probability = " << positiveOutcome << " / " << sampleSpace << endl;
}
