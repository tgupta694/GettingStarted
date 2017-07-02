#include<stdio.h>
#include<stdlib.h>

 void main()
  {
  	int arr[10],s,search,a=0,first,last,middle,i;
  	
  	//array input 
  	
  	   printf("size of array = \n");
  	   scanf("%d",&s);
  	   printf("enter the elements of the array -> \n");
  	   
  	for(i=0;i<s;i++)
  	 {
  	 	scanf("%d",&arr[i]);
  	 	
	 }
  	    
  	    printf("enter the number to find -> ");
	  
  	    
  	    
  	    scanf("%d",&search);	   
  	    
  	   
  	for(i=0;i<s;i++)    
	  {
  	    if(arr[i+1]>arr[i])	
  	 	 {
  	 	 	a=a+1; //count to determine the position of the largest number for the rotated array
  	 
  	     }
  	 
      }  
				
  	
      
	
    for(i=0;i<a;i++)   // binary search in 1st group 4 5 6 7 8 or 3 4 5
  	 {
  	   
  	 	 
  	 	
  	 	    first=0; 
  	        last=a-1;
  	        middle=(first+last)/2;
  	
  	
  	
            while(first<=last)
  	         {
  	 	       if(arr[middle]<search)
  	 	        {
		 	      first=middle+1;
		
  	            }
  	 	
	           else if(arr[middle]==search)
  	 	        {
		          printf("%d found at index = %d \n",search,middle); 
		          break;
	            }
	            
	     
		       else 
		       last=middle-1;
		       middle=(first+last)/2;
	
	         }
	         
	    
	    
  	
  	 	 	
	 }
	 
	 
	 for(i=a;i<s;i++)   // binary search in second group 123 or 12
	  {
	  	
	  	    first=a; 
  	        last=s-1;
  	        middle=(first+last)/2;
  	
  	
  	
            while(first<=last)
  	         {
  	 	       if(arr[middle]<search)
  	 	        {
		 	      first=middle+1;
		
  	            }
  	 	
	           else if(arr[middle]==search)
  	 	        {
		          printf("%d found at index = %d \n",search,middle); 
		          break;
	            }
	     
		       else 
		       last=middle-1;
		       middle=(first+last)/2;
	
	  	
	  	
	  	
	         }
	       
	       
  }
}
