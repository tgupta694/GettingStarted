#include<iostream>
using namespace std;
int bubblesort(int arr[],int n)
{

	for(int i=0; i<(n-1); i++)
	{
		for(int j=0; j<(n-i-1); j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
    }
    cout<<"Sorted array is:\n";
    for(int i=0;i<n;i++)
    {
    	cout<<arr[i]<<endl;
	}
}
int main()
{
    int arr[20];
    int n;
    cout<<"Enter the number of elements in array";
    cin>>n;
    cout<<"enter elements of array";
    for(int i=0;i<n;i++)
    cin>>arr[i];
     bubblesort(arr,n);
    
}
