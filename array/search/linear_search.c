/****** LINEAR SEARCH IN 1D ARRAY ********/

#include <stdio.h>
#define SIZE 20

void linear_search(int array[], int length, int element);

int main()
{
        int count, length, element, array[SIZE];
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
	linear_search(array, length, element);
	return 0;
}

void linear_search(int array[], int length, int element){
	int count, flag = 0 ;
	for(count = 0 ; count < length ; count++){
		if(array[count] == element){
			printf("Element found!!!! Element = %d is at index = %d\n", element, count);
			flag = 1;
		}
	}
        if(flag == 0)
	        printf("ELEMENT NOT FOUND!!!!\n");

	return;	
}
