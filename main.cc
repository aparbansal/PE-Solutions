#include<iostream>
#include<stdio.h>

using namespace std;

int main()   			//600851475143
{

auto  no = 600851475143;
auto  prime = 1;

for(auto i=2; i<600851475143; i++)
{
  while(no%i==0)
  {
	prime  = i;
	if(no!=i)	no = no / i;
	else 		break;
  }
  if(no==i) 	break;
}
cout << "Prime no.: " << prime << endl;

/* int sum=1, n=0, temp=0, temp2=0;
 cout << "Enter the number of elements: " << endl;
 cin >> n;
 for(int i=0; i<n; i++)
 while(sum < 4000000)
 {
	sum = sum + temp;
	printf("\n %d ", sum);
	temp = sum-temp;
	if(sum%2==0)	temp2 = temp2 + sum;
 }
	cout << "\nRequired sum=" << float(22%33) << endl;
*/
}
