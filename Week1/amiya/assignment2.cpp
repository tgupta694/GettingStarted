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
int main()
{
	 int ar[100] ;int n;int x;
     cout<<"Enter the no. of elements in array";
     cin>>n;
	 cout<<"Enter the array"<<endl;
	 for(int i=0;i<n;i++)
	 cin>>ar[i];
	 cout<<"Enter the element you want to search";
	 cin>>x;
	 binsearch(ar,0,n-1,x);
	 return 0; 
}
