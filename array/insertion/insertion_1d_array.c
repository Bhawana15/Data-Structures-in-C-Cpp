/* INSERTION TRAVERSAL IN 1D ARRAY
 * 1. INSERTION AT THE BEGINNING
 * 2. INSERTION AT THE END 
 * 3. INSERTON AT ANY LOCATION */

#include <stdio.h>
#define SIZE 20

void screen(int array[], int length);
void insert(int array[], int element, int index, int length);

int main(){
	int i=0, array[SIZE], length=0;    /* length is the number of elements that are present in the array */
	printf("!!!!!!!! PROGRAM TO INSERT AN ELEMENT IN 1D ARRAY !!!!!!!!!\n\n");
	printf("How many numbers do you want in your array (maximum = 20)????\t");
	scanf("%d", &length);
	if(length > 20){
		printf("Maximum size of array can be 20!!! Enter a number less than 20\n");
		scanf("%d", &length);
	}
	printf("Enter the elements of array (maximum = 20)\n");
	while(i < length){
		scanf("%d", &array[i]);
		i++;
	}
	if(length == 21)
		printf("Your array is full!!! You cannot enter more numbers!!!");
	screen(array, length);
	return 0;
}

void screen(int array[], int length){
	int element, index;
	printf("Enter the number you want to insert:\t");
	scanf("%d", &element);
	printf("Enter the index where you want to insert the element:\t");
	scanf("%d", &index);
	insert(array, element, index, length);
	return;
}

void insert(int array[], int element, int index, int length)
{	
	int i;
	char more;

	/****** INSERTION STARTS *******/
	for(i = length ; i > index ; i--)
		array[i] = array[i-1];
	array[index] = element;
	length++;
	/****** INSERTION ENDS ********/

	/****** TRAVERSAL BEGINS ******/
	printf("Your array after insertion looks like this:\n");
	for(i = 0 ; i < length ; i++)
		printf("%d\t", array[i]);
	/****** TRAVERSAL ENDS *******/

	if(length < 21){
		printf("\nDo you want to insert more elements?? Enter 'y' for a yes and 'n' for a no:\n");
		scanf("%s", &more);
		if(more != 'y' && more != 'n'){
		        printf("You've entered something wrong!!!!! Enter 'y' for yes and 'n' for no!!! \n");
			scanf("%s", &more);
		}

		if(more == 'y')
			screen(array, length);
	}

	return;
}
