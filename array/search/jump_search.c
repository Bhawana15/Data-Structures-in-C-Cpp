/***** PROGRAM TO PERFORM JUMP SEARCH IN 1D ARRAY *****/
/* array: (0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610)
 * CONDITION : THE ARRAY SHOULD BE SORTED
 * SUPPOSE WE CHOOSE JUMP = 4 THEN
 * STEP 1: Jump from index 0 to index 4;
 * STEP 2: Jump from index 4 to index 8;
 * STEP 3: Jump from index 8 to index 12;
 * STEP 4: Since the element at index 12 is greater than 55 we will jump back a step to come to index 8.
 * STEP 5: Perform linear search from index 8 to get the element 55. 
 * Here we are finding the value of jump by using sqrt(n) */

#include <stdio.h>
#include <math.h>
#define SIZE 20

int jump_search(int array[], int length, int element);
void sort(int *array, int length);

int main()
{
        int count, length, element, jump, index = -1, array[SIZE];
        printf("##########  PROGRAM OF LINEAR SEARCH IN 1D ARRAY  ##########\n");
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
	index = jump_search(array, length, element);
	if(index == -1){
		printf("ELEMENT NOT FOUND\n");
		return 0;
	}
	printf("Element %d found at index %d\n", element, index);
        return 0;
}

/* JUMP SEARCH BEGINS */
int jump_search(int array[], int length, int element)
{
	int i = 0, jump = sqrt(length);
	sort(array, length);

	while((array[i] <= element) && (i < length) == 1)
	{
		if(array[i] == element){
			return i;
		}
		i += jump;
	}
	if((i < length-1) && (array[i] > element)){
		for(i=i-jump ; i < i+jump ; i++){
			 if(array[i] == element)
				 return i;
                }
	}
	if(i > length-1)
		for(i=i-jump ; i < length ; i++)
			if(array[i] == element)
				return i;
	return -1;
}
/* JUMP SEARCH ENDS */

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
