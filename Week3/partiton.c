
#include <stdio.h>
#include <stdlib.h>


int quicksort( int array[], int first, int last, int k)
{
    int temp;
    int resIndex = -1;
    int left, right, pivot;
    
    pivot = last;
    left = first;
    right = last - 1;

    if (first == last) //just one element left
        return first;

    while ( left < right)
    {
        while (array[left] < array[pivot])
            left += 1;
        while (array[right] >= array[pivot])
            right -= 1;

        if (left < right)
        {
            //swap values at index left and right
            temp = array[left];
            array[left] = array[right];
            array[right] = temp;
        }
    }

    //swap pivot and right
    temp = array[pivot];
    array[pivot] = array[left];
    array[left] = temp;
    pivot = left;   

    if ( k == pivot)
    {
        printf("!!! Found the kth smallest element !!!\n");
        return pivot;
    }
    else
    {
        if (k < pivot)
        {
            resIndex = quicksort (array, first, (pivot - 1), k);
        }
        else
        {
            resIndex = quicksort (array, (pivot + 1), last, k);
            
        }
    }
    return resIndex;
}

int main()
{
    int array[10];
    int s,k,i;
    int index = -1;
    printf("Enter the size of array\n");
    scanf("%d", &s);
    
	printf("Enter array elements\n");
    for(i=0;i<s;i++)
	{
	 scanf("%d", &array[i]);
     }
    
	printf("Enter the kth smallest element to find\n");
    scanf("%d", &k);
    

        index = quicksort(array, 0, (s-1), (k - 1));//index for k-th elem would be k-1
        printf("The kth smallest element in array is %d\n", array[index]);
    
    return 0;
}

