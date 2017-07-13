#include<iostream>
 using namespace std;

 int binsearch(int arr[],int i,int j,int key)
 {
 	while(j>=i)
 	{
 		int mid=(i+j)/2;
 		if(arr[mid]==key)
 		{
 		 cout<<"Element found at position:"<<mid<<endl;
 		 break;
 	    }
 		else if(arr[mid]>key)
 		j=mid-1;
 		else
 		i=mid+1;
 	}
 	if(i>j)
 	cout<<"element not available";
 }
 int search(int arr[],int i,int j,int key)
 {
 	if(arr[i]>arr[j])
 	{
 		int mid=(i+j)/2;
 		if(arr[mid]==key)
 		{

 		    cout<<"available at location"<<mid;
 		    return 0;
 		}
 		if((arr[i]>arr[mid-1])&&((key>=arr[i])||(key<=arr[mid-1]))) search(arr,i,mid-1,key); //searching in rotated first group.
 	          else if((arr[mid+1]>arr[j])&&((key>=arr[mid+1])||(key<=arr[j]))) search(arr,mid+1,j,key); //searching in rotated second group.
 		else if((arr[i]<=arr[mid-1])&&((key<=arr[mid-1])&&(key>=arr[i]))) binsearch(arr,i,mid-1,key );// first group is sorted and element lies in it.
 		else if((arr[mid+1]<=arr[j])&&((key>=arr[mid+1])&&(key<=arr[j]))) binsearch(arr,mid+1,j,key); //second group is sorted and element lies in it.
 		else
 		{
 			cout<<"Not found";
 			return 0;
 		}

 	}
 	else binsearch(arr,i,j,key);
    }
 int main()
 {
 	int s,key;
 	cout<<"Enter array size:";
	cin>>s;
 	int arr[s];
 	cout<<"Enter array elements: \n";
 	for(int i=0;i<s;i++)
 	{
 		cin>>arr[i];
 	}
 	cout<<"Enter element to be searched";
 	cin>>key;
 	search(arr,0,s-1,key);
 }

