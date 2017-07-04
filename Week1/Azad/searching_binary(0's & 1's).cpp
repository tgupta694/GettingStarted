# include<iostream>
using namespace std;
void swap(int &a,int &b){
	int temp;
	a=temp;
	a=b;
	b=temp;
 }
  int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n; i++){
        cin>>a[i];}	
	for(int i=0; i<n-1;i++){
	          for(int j=0; j<n; j++){
			       if(a[j-1]>a[j])
			       swap(a[j-1],a[j]);}
	                    }
	 for(int i=0;i<n; i++)
         cout<<a[i];                  
	}
	
