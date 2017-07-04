#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n, i, arr[50], j, temp,t,k;
	cout<<"Enter the number of elements";
	cin>>n;
	cout<<"Enter numbers :";
	for(i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	for(i=0; i<(n-1); i++)
	{
		for(j=0; j<(n-i-1); j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
    cout<<"element to be searched kth smallest(for smallest press 1) or kth largest(for largest press 2)";
    cin>>t;
    if(t==1)
    {
    	cout<<"Enter the value of k";
    	cin>>k;
    	cout<<k<<"th smallest element is"<<arr[k-1];
	}
	else
	{
	  cout<<"Enter the value of k";
	  cin>>k;
	  cout<<k<<"th largest element is"<<arr[n-k];	
	}
	return 0;
}
