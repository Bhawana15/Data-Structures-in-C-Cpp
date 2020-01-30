/************ BINARY SEARCH IN 1D ARRAY *************/

#include <stdio.h>
#define SIZE 20

void binary_search(int array[], int length, int element);

int main()
{ 
        int i, count, length, element, bucket, array[SIZE];
        printf("##########  PROGRAM OF BINARY SEARCH IN 1D ARRAY  ##########\n");
        printf("\nHow many elements do you want to store in your array of maximum size 20????\n");
        scanf("%d", &length);
        if(length > 20){
                printf("Maximum size of array is 20!!! Enter a number less than equal to 20!!! \n");
                scanf("%d", &length);
        }

        printf("\nEnter the elements of the array:\n");
        for(count = 0 ; count < length ; count++)
                scanf("%d", &array[count]);

	/******* SORTING BEGINS *******/
	printf("########## Sorting your array ###########\nSorted array is:\n");
	for(count = 0 ; count < length ; count++){
		for(i = count+1 ; i < length ; i++){
			if(array[count] > array[i]){
				bucket = array[count];
				array[count] = array[i];
				array[i] = bucket;
			}
		}
	}

	for(count = 0 ; count < length ; count++)
		printf("%d\t", array[count]);
	/******** SORTING ENDS *********/
	

        printf("\nEnter the element you want to search in the array :\n");
        scanf("%d", &element);

        binary_search(array, length, element);

        return 0;
}

void binary_search(int array[], int length, int element){
	int mid, flag = 0, beg = 0, end = length-1;

	mid = length/2;
	while(!(beg > end)){
		if(array[mid] == element){
			printf("Element found!!! Element = %d is present at Index = %d\n", element, mid);
			flag = 1;
			break;
		}
		else{
			if(array[mid] < element)
	                	beg = mid+1;	       	
		        else
			        end = mid;
		        mid = (beg + end)/2;
		}
	}
	if(flag == 0)
		printf("Element not found\n");

	return;
}
