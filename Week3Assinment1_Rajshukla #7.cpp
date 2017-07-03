#include<iostream>
using namespace std;
int main()
{
   int arr[10],s,p,key,i,b=0,c=0,pos;
   int found=0;
   cout<<"enter size of array:";
   cin>>s;
   cout<<"enter array elements:";
   for(i=0;i<s;i++)
    {
       cin>>arr[i];
    }

     cout<<"\n enter key:";
     cin>>key;
      for(i=0;i<s;i++)
      {
          if(arr[i+1]<arr[i])
            p=arr[i];
      }


       for(i=0;i<p;i++)  //linear search for first group.
           {
             if(arr[i]==key)
             {
                 b=1;
                 pos=i;
                 break;
             }
           }

           if(b==1)
            {
            cout<<"\n number found at position:"<<pos;
            found++;
            }

         if(found==0)
         {

        for(i=p;i<s;i++)  //linear search in second group
        {
            if(arr[i]==key)
            {
                c=1;
                pos=i;
                break;
            }
        }
        if(c==1)
        {
            cout<<"number found at position:"<<pos;
        }
         }
    if(b==0&&c==0)
    cout<<"not found";
         return 0;
}
