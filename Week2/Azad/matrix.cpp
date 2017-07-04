#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>> n>>m;
	  int a[n][m];	
	  for(int i=0; i<n; i++){
		   for(int j=0; j<m; j++ ){		
			      cin>>a[i][j];// entering elements in the matrix
		    }
	   }	
	   //as the elements entered in the matrix are already sorted	
	  int x,j;
	  cout<<"the element to be seached    ";
    cin>>x; //the element to be searched
	  for(int i=0; i<n; i++){
		for( j=0; j<m; j++ ){			
			if(a[i][j]==x){cout<<"the element in tht positiion    ("<<i<<","<<j<<")";
			break;
			 }
		  }
  	}
	  if(j==m){
	 cout<<"element not found";}
  }
