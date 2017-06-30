#include<stdio.h>
#include<stdlib.h>

int main()
{
   int arr[12][12],r,c,m,temp=0,i,j,ri,ci,search; //ri=row index ci=column index
   
   printf("enter number of rows:");
   scanf("%d",&r);
   
   printf("enter number of columns:");
   scanf("%d",&c);
   
   
    printf("enter the elements of the array --> \n");
    
    for(i=0;i<r;i++)  //taking input for the 2d array
    { 
       printf("enter elements for row %d --> ",i);    
       for(j=0;j<c;j++)
        {
        scanf("%d",&arr[i][j]);
        }
    }
    

    printf("\n enter the number to be searched = ");
    
	scanf("%d",&search);
   
    for(i=0;i<r;i++)  // linear search
    {
       for(j=0;j<c;j++)
        {
           if(search==arr[i][j])
             {
               temp=2;
               ri=i;
               ci=j;
                  
              }
        }
    }


     if(temp=2)
     printf("position of the number -->\n index of row = %d \n index of column = %d",ri,ci);   
     
    
     else
     printf("number not found");
           
          
    return 0;
}

// restriction for this program is if similar elements are entered (i.e. number 2 is at two or more index, this program will only show the index of the last one, working on it !!)
