#include<iostream>
using namespace std;

    int main()
    {
        int arr[10],s,k,i,temp;
     cout<<"enter array size:";
      cin>>s;
     cout<<"enter array elements:";
      for(i=0;i<s;i++)
         { cin>>arr[i];}

        for(i=1;i<s;i++)
     {
        for(int j=0;j<(s-i);j++)
            if(arr[j]>arr[j+1])
               {
                  temp=arr[j];
                  arr[j]=arr[j+1];
                  arr[j+1]=temp;
               }
     }

        cout<<"\n enter key:";
         cin>>k;
         for(i=0;i<s;i++)
         {
      if(k==i)
            cout<<" found at index:"<<arr[i];
      else
            cout<<"number not found at position "<<i<<",";
         }


    return 0;
   }
