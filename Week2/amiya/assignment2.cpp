#include<iostream>

using namespace std;
int main()
{
	int n;
	cout<<"Enter the value of n in an n*n matrix";
	cin>>n;
	int a[n][n],x,k;
	cout<<"Enter matrix rowwise";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"Enter the element to be searched";
	cin>>x;
	if(a[0][0]>x) cout<<"Element not found";
	else if (a[n-1][n-1]<x) cout<<"Element not found";
	else
	{
	
	for(int i=0;i<n;i++)
	{
	   if(a[i][0]>x) 
	   {
	   	cout<<"element not found";
	   	break;
	   }
	   else
	   {
	   	for( k=0;k<n;k++)
		{
			if(a[i][k]==x)
			{
				cout<<"Element found at ("<<i+1<<","<<k+1<<") position";
				break;
			}
		}
	   }
	}

  if(k==n)
  cout<<"elment not found";	
}
}
