//sorting and binary search

#include<stdio.h>
#include<stdlib.h>

 main()
  {
  	int a,i,ray[10],j,k,l,first,last,middle,temp,search;
  	
       printf("enter the number of elements of the array --> \n");
  	   scanf("%d",&a);
	   printf("enter the elements of the array --> \n");
  	
  	   
  	for(i=0;i<a;i++)
  	 {
  	 	scanf("%d",&ray[i]);
  	 	
  	 }
  	
  	
  	for(j=1;j<a;j++)   ///sorting in ascending order
     { 
        for(k=0;k<(a-j);k++)
            if(ray[k]>ray[k+1])
               {
                  temp=ray[k];
                  ray[k]=ray[k+1];
                  ray[k+1]=temp;
               }       
     }
     
       printf("sorted array is --> \n");
    
  	for(l=0;l<a;l++)
	  {
	  	 printf("%d \n",ray[l]);
      } 

  	   printf("enter the element to find --> \n");
  	   scanf("%d",&search);
  	
  	   first=0; 
  	   last=a-1;
  	   middle=(first+last)/2;
  	
  	
  	
    while(first<=last)
  	 {
  	 	if(ray[middle]<search)
  	 	 {
			first=middle+1;
		
  	     }
  	 	
	    else if(ray[middle]==search)
  	 	 {
		    printf("%d found at index = %d \n",search,middle); 
		    break;
	     }
	     
		else 
		  last=middle-1;
		  middle=(first+last)/2;
	
	 }
  	
  	if(first>last)
  	 printf("number is not present in the array !");
  	
    getch();
  
  }
