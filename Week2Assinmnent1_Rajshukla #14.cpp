#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int arr[10], i, num, n, c=0, pos;
	cout<<"\n Enter the array size : ";
	cin>>n;
	cout<<"\n Enter Array Elements : ";
	for(i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	cout<<"\n Enter the number to be search : ";
	cin>>num;
	for(i=0; i<n; i++)
	{
		if(arr[i]==num)
		{
			c=1;
			pos=i+1;
			break;
		}
	}
	if(c==0)
	{
		cout<<"\n Number not found..!!";
	}
	else
	{
		cout<<num<<"\n  found at position "<<pos-1;
	}
	return 0;
}
