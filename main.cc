#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
 int sum=1, n=0, temp=0, temp2=0;
 cout << "Enter the number of elements: " << endl;
 cin >> n;
 for(int i=0; i<n; i++)
 {
	sum = sum + temp;
	printf("\n %d ", temp);
	temp = sum-temp;
 }
	//cout << "\nSUM=" << sum << endl;
}
