/******* PROGRAM TO SEARCH AN ELEMENT IN 1D ARRAY USING EXPONENTIAL SEARCH *********/
/* The main idea is to find the range where element may be present and then apply binary search on that particular range in a very large array.
 * The idea is to start with subarray size 1, compare its last element with x, then try size 2 and compare its last element with x, then 4 and so on   * until last element of a subarray is not greater than the element to be found.
 * Once we find an index i such that element at i greater than the element to be found, then we, must apply binary search from range i/2 to i, as we   * know that the element must be present between i/2 and i (Why i/2? because we could not find a greater value in previous iteration) */

#include <stdio.h>
#define SIZE 20

void sort(int* array, int length);
int exponential_search(int array[], int length, int element);
int binary_search(int array[], int beg, int end, int element);

/* DRIVER FUNCTION */
int main()
{
        int count, length, element, index = -1, array[SIZE];
        printf("##########  PROGRAM OF EXPONENTIAL SEARCH IN 1D ARRAY  ##########\n");
        printf("\nHow many elements do you want to store in your array of maximum size 20????\n");
        scanf("%d", &length);
        if(length > 20){
                printf("Maximum size of array is 20!!! Enter a number less than equal to 20!!! \n");
                scanf("%d", &length);
        }

        printf("\nEnter the elements of the array:\n");
        for(count = 0 ; count < length ; count++)
                scanf("%d", &array[count]);

        printf("Enter the element you want to search in the array :\n");
        scanf("%d", &element);

        index = exponential_search(array, length, element);
        (index == -1) ? printf("ELEMENT NOT FOUND\n") : printf("Element %d is at index %d\n", element, index);
        return 0;
}

/******* SORTING BEGINS *******/
void sort(int* array, int length)
{
        int i, j, temp;

        printf("########## Sorting your array ###########\nSorted array is:\n");
        for(i = 0 ; i < length ; i++){
                for(j = i+1 ; j < length ; j++){
                        if(*(array+i) > *(array+j)){
                                temp = *(array+i);
                                *(array+i) = *(array+j);
                                *(array+j) = temp;
                        }
                }
        }

        for(i = 0 ; i < length ; i++)
                printf("%d\t", *(array+i));
        printf("\n");
}
/******** SORTING ENDS *********/

/* BINARY SEARCH BEGINS */
int binary_search(int array[], int beg, int end, int element){
        int mid;

        mid = end/2;
        while(!(beg > end)){
                if(array[mid] == element)        /* if element is at the middle of the range specified */
                        return mid;

                else{                            /*If element is not at the middle */
                        if(array[mid] < element) /* If element is greater than the middle element */
                                beg = mid+1;
                        else                    /*If element is less than the middle element */
                                end = mid;
                        mid = (beg + end)/2;
                }
        }
	return -1;
}
/* BINARY SEARCH ENDS */ 

/* EXPONENTIAL SEARCH BEGINS */
int exponential_search(int array[], int length , int element){
	int i = 1;
	
	sort(array, length);

	/* Best case - if element to be searched is the first element */
	if(array[0] == element)
		return 0;
	/* finding the range of element i.e. i/2 and i */
	while(i < length && array[i] <= element)
	       i *= 2;
        return binary_search(array, i/2, i, element);	
}
/* EXPONENTIAL SEARCH ENDS */
