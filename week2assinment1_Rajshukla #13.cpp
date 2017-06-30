#include<iostream>
using namespace std;
int main()
{
int arr[10],s,m,i,c=0;
cout<<"enter the size of array";
cin>>s;
cout<<"enter elements in array"<<endl;
for(i=0;i<s;i++)
{
cin>>m;
}
if(m==0||m==1)
{
for(i=0;i<s;i++)
{
if (arr[i]==0)
{c++;}
}
cout<<"numbers of zeros are"<<c<<"  and sorted array is";
for(i=0;i<c;i++)
{
arr[i]=0;}
for(i=c;i<s;i++)
{
arr[i]=1;
}
for(i=0;i<s;i++)
{
cout<<arr[i];
}
}
else
{
cout<<"only 0s and 1s are allowed";
}
return 0;
}
