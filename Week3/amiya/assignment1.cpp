#include<iostream>
using namespace std;

int binsearch(int a[],int i,int j,int x)
{
	while(j>=i)
	{
		int mid=(i+j)/2;
		if(a[mid]==x)
		{
		 cout<<"Element found at position:"<<mid<<endl;
		 break;
	    }
		else if(a[mid]>x)
		j=mid-1;
		else
		i=mid+1;
	}
	if(i>j)
	cout<<"The number is not available in array";
}
int search(int a[],int i,int j,int x)
{
	if(a[i]>a[j])
	{
		int mid=(i+j)/2;
		if(a[mid]==x)
		{
		    
		    cout<<"available at loc"<<mid+1;
		    return 0;
		}
		if((a[i]>a[mid-1])&&((x>=a[i])||(x<=a[mid-1]))) search(a,i,mid-1,x);
	    else	if((a[mid+1]>a[j])&&((x>=a[mid+1])||(x<=a[j]))) search(a,mid+1,j,x);
		else if((a[i]<=a[mid-1])&&((x<=a[mid-1])&&(x>=a[i]))) binsearch(a,i,mid-1,x);
		else if((a[mid+1]<=a[j])&&((x>=a[mid+1])&&(x<=a[j]))) binsearch(a,mid+1,j,x);
		else 
		{
			cout<<"Not found";
			return 0;
		}
		
	}
	else binsearch(a,i,j,x);
}
int main()
{
	int n,x;
	cout<<"Enter the number of elements";
	cin>>n;
	int a[n];
	cout<<"Enter elements\n";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter element to be searched";
	cin>>x;
	search(a,0,n-1,x);
	
}
