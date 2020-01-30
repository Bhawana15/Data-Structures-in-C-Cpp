/****** PROGRAM TO SEARCH AN ELEMENT USING INTERPOLATION SEARCH ALGORITHM *******/
/*  The idea of formula is to return higher value of pos
 * when element to be searched is closer to arr[hi]. And
 * smaller value when closer to arr[lo]
 * pos = lo + [ (x-arr[lo])*(hi-lo) / (arr[hi]-arr[Lo]) ]
 * arr[] ==> Array where elements need to be searched
 * x     ==> Element to be searched
 * lo    ==> Starting index in arr[]
 * hi    ==> Ending index in arr[]
 * Step1: In a loop, calculate the value of “pos” using the probe position formula.
 * Step2: If it is a match, return the index of the item, and exit.
 * Step3: If the item is less than arr[pos], calculate the probe position of the left sub-array. Otherwise calculate the same in the right sub-array.
 * Step4: Repeat until a match is found or the sub-array reduces to zero.
 */

#include <stdio.h>
#define SIZE 20

int interpolation_search(int array[], int low, int high, int element);
void sort(int* array, int length);

/* DRIVER FUNCTION */
int main()
{
        int count, length, element, index = -1, array[SIZE];
        printf("##########  PROGRAM OF INTERPOLATION SEARCH IN 1D ARRAY  ##########\n");
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

	index = interpolation_search(array, 0, length, element);
	if(index == -1){
		printf("ELEMENT NOT FOUND\n");
		return 0;
	}
	printf("Element %d is found at index %d\n", element, index);
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

/****** INTERPOLATION SEARCH BEGINS ******/
int interpolation_search(int array[], int low, int high, int element)
{
	int  i = 0, pos;
	sort(array, high);

	high--;
	while(high >= low && array[low] <= element && array[high] >= element){
		if(low == high && array[low] == element)
			return low;
		pos = low + (((element - array[low])*(double)(high - low)) / (array[high] - array[low]));
		if(array[pos] == element)
			return pos;
		else{
			if(element < array[pos])
				high = pos - 1;
			else
				low = pos + 1;
		}
	}
	return -1;
}
/****** INTERPOLATION SEARCH ENDS ********/
