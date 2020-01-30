/* DELETION OF AN ELEMENT IN 1D ARRAY */

#include <stdio.h>
#define SIZE 20

int main()
{
	int i, count, length, element, array[SIZE];
	printf("########## PROGRAM TO DELETE AN ELEMENT FROM 1D ARRAY #######\n");
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
	for(count = 0 ; count < length ; count++)
		printf("%d\t", array[count]);

	/******* DELETION BEGINS ********/
	printf("Enter the element you want to delete from your array :\t");
	scanf("%d", &element);

	for(count = 0 ; count < length ; count++){
		if(array[count] == element){
			for(i = count ; i < length ; i++){
				array[i] = array[i+1];
			}
		}
	}
	length--;
	/******** DELETION ENDS *********/

	printf("\n\nArray after deletion is :\n");
	for(count = 0 ; count < length ; count++)
		printf("%d\t", array[count]);
	printf("\n");

	return 0;
}		
