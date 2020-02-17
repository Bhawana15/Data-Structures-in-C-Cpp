/******* INSERTING AN ELEMENT IN THE SORTED ARRAY *********/

#include <stdio.h>
#define SIZE 20

void sort(int array[], int length);
void insert(int array[], int element, int length);

int main()
{
	int i=0, array[SIZE], length=0, element;    /* length is the number of elements that are present in the array */
        printf("!!!!!!!! PROGRAM TO INSERT AN ELEMENT IN 1D SORTED ARRAY !!!!!!!!!\n\n");
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

	printf("\nThe array will be sorted first of all!!! The sorted array is :\n");
	sort(array, length);

	printf("\nEnter the element you want to insert into the sorted array :\t");
	scanf("%d", &element);
	insert(array, element, length);

	return 0;
}

void sort(int array[], int length)
{
	int count, i, temp;

	for(count = 0; count < length-1 ; count++){
		for(i = 1 ; i < length-count-1; i++){
			if(array[count] > array[count+1]){
			        temp = array[count];
			        array[count] = array[i];
			        array[i] = temp;
			}
		}
	}

	for(count = 0 ; count < length ; count++)
		printf("%d\t", array[count]);
	return;
}

void insert(int array[], int element, int length){
	int count = 0, index; 

	while(array[count] < element)
			count++;
	index = count;

	for(count = length ; count >= index ; count--)
		array[count] = array[count-1];
	array[index] = element;
	length++;

	printf("Array after insertion of %d at index %d looks like :\n", element, index);
	for(count = 0 ; count < length ; count++)
		printf("%d\t", array[count]);
	return;
}
