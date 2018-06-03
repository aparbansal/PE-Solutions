#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
 int sum=1, n=0, temp=0, temp2=0;
 cout << "Enter the number of elements: " << endl;
 cin >> n;
// for(int i=0; i<n; i++)
 while(sum < 4000000)
 {
	sum = sum + temp;
	printf("\n %d ", sum);
	temp = sum-temp;
	if(sum%2==0)	temp2 = temp2 + sum;
 }
	cout << "\nRequired sum=" << temp2 << endl;
}
