/* PROGRAM TO SEARCH AN ELEMENT IN 1D ARRAY USING TERNARY SEARCH */
/* We can divide the array into three parts by taking mid1 and mid2 which can be calculated as shown below. Initially, l and r will be equal to 0 and  * n-1 respectively, where n is the length of the array.
 * mid1 = l + (r-l)/3
 * mid2 = r – (r-l)/3
 * Steps to perform Ternary Search:
 * First, we compare the key with the element at mid1. If found equal, we return mid1.
 * If not, then we compare the key with the element at mid2. If found equal, we return mid2.
 * If not, then we check whether the key is less than the element at mid1. If yes, then recur to the first part.
 * If not, then we check whether the key is greater than the element at mid2. If yes, then recur to the third part.
 * If not, then we recur to the second (middle) part.
 * Note: Array needs to be sorted to perform ternary search on it. */

#include <stdio.h>
#define SIZE 20

int ternary_search(int array[], int l, int r, int element);
void sort(int* array, int length);

int main()
{
        int count, length, element, index = -1, l = 0, r, array[SIZE];
        printf("########## PROGRAM TO SEARCH AN ELEMENT IN 1D ARRAY USING TERNARY SEARCH ##########\n");
        printf("\nHow many elements do you want to store in your array of maximum size 20????\n");
        scanf("%d", &length);
        if(length > 20){
                printf("Maximum size of array is 20!!! Enter a number less than equal to 20!!! \n");
                scanf("%d", &length);
        }
	r = length - 1;

        printf("\nEnter the elements of the array:\n");
        for(count = 0 ; count < length ; count++)
                scanf("%d", &array[count]);

        printf("Enter the element you want to search in the array :\n");
        scanf("%d", &element);

	sort(array, length);
        index = ternary_search(array, l, r, element);
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

int ternary_search(int array[], int l, int r, int element)
{
	while(r >= l)
	{
		int mid1 = l + (r - l) / 3;
		int mid2 = r - (r - l) / 3;

		/* If element is at any mid */
		if(array[mid1] == element)
			return mid1;
		if(array[mid2] == element)
			return mid2;

		/* If element is not found at any mid */
		if(element < array[mid1])
			return ternary_search(array, l, mid1 - 1, element);
		else if(element > array[mid2])
			return ternary_search(array, mid2 + 1, r, element);
		else
			return ternary_search(array, mid1 + 1, mid2 - 1, element);
	}

	/* Element not found */
	return -1;
}
