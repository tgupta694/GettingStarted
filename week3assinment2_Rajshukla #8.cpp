#include<iostream>
using namespace std;

    int main()
    {  int arr[10],s,k,m,temp;
     cout<<"enter array size:";
      cin>>s;
     cout<<"enter array elements:";
      for(int i=0;i<s;i++)
         { cin>>arr[i];}
        cout<<"enter kth smallest element";
         cin>>k;
        for(int i=1;i<s;i++)
     {
        for(int j=0;j<(s-i);j++)
            if(arr[j]>arr[j+1])
               {
                  temp=arr[j];
                  arr[j]=arr[j+1];
                  arr[j+1]=temp;
               }
     }

     cout<<"sorted array is:"<<endl;;
        for(int i=0;i<s;i++)
     { cout<<" "<<arr[i];}

  cout<<" and"<<k<<"th smallest element is:"<<arr[k-1];

    return 0;
    }
