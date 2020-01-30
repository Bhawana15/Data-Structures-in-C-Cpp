/* PROGRAM TO DELETE AN ELEMENT WHILE SEARCHING 1D ARRAY */
/* This method assumes that the element is always present in the array. 
 * The idea is to start from right most element and keep moving elements while searching for ‘x’. */

#include <stdio.h>
#define SIZE 20

void print_array(int array[], int length);
void delete_while_searching(int array[], int length, int element);

int main()
{
        int i, count, length, element, found = -1, array[SIZE];
        printf("########## PROGRAM TO DELETE AN ELEMENT WHILE SEARCHING 1D ARRAY #######\n");
        printf("\nHow many elements do you want to store in your array of maximum size 20????\n");
        scanf("%d", &length);
        if(length > 20){
                printf("Maximum size of array is 20!!! Enter a number less than equal to 20!!! \n");
                scanf("%d", &length);
        }

        printf("\nEnter the elements of the array:\n");
        for(count = 0 ; count < length ; count++)
                scanf("%d", &array[count]);

        printf("Your array looks like this :\n");
        print_array(array, length);
	printf("Enter the element you want to delete :\t");
	scanf("%d", &element);
	delete_while_searching(array, length, element);
	return 0;
}

void print_array(int array[], int length){
        int i;
        for(i = 0 ; i < length ; i++)
                printf("%d\t", array[i]);
        printf("\n");
}

void delete_while_searching(int array[], int length, int element)
{
	int i = length - 2, temp = 0, prev = array[length-1];

	if(array[length-1] == element){
		print_array(array, length-1);
		return;
	}

	while(i >= 0 && array[i] != element)
	{
		temp = array[i];
		array[i] = prev;
		prev = temp;
		i--;
	}

	if(i < 0){
		printf("ELEMENT NOT FOUND\n");
		return;
	}

	if(array[i] == element){
		array[i] = prev;
                length--;
	        printf("After deletion \n");
	        print_array(array, length);
	}
}
