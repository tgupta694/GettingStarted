#include<stdio.h>
#include<stdlib.h>

    main()
     { 
	  int arr[10],a,p,i,j,temp;
  
       printf("enter array size --> ");
       scanf("%d",&a);
       
       printf("enter array elements --> ");
      
	  for(i=0;i<a;i++) 
	   {
	      scanf("%d",&arr[i]);
	   }
	   
       printf("enter kth smallest element to be searched -->\n");
       scanf("%d",&p);
		   
      for(i=1;i<a;i++)
       { 
        for(j=0;j<(a-i);j++)
            if(arr[j]>arr[j+1])
               {
                  temp=arr[j];
                  arr[j]=arr[j+1];
                  arr[j+1]=temp;
               }       
       }
       
       printf("sorted array is -->\n"); 
       
      for(i=0;i<a;i++)
       { 
	      printf(" %d",arr[i]);
  
       }
       printf("\n and kth(%d) smallest element is %d",p,arr[p-1]);
 }
