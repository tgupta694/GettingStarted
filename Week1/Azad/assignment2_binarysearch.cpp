#include<iostream>
using namespace std;

int bsrch(int a[],int n, int x){
	int l=1,h=n,mid;
	while(l<=h){
		// consider element to be present in the array
		mid=(l+h)/2;
		if(x<a[mid]){h=mid-1;
		}
		else if(x>a[mid]){l=mid+1;
		}
		else if(x==a[mid]){return mid+1;
		}
		
		
	}
  return -1;  // not found
	
}


int main(){int n,x;
int a[n];
	cin>>n;
	for(int i=0; i<n; i++){cin>>a[i];
}
	cin>>x;
	cout<<bsrch(a,n,x);
}
