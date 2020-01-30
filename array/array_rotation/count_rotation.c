/**** PROGRAM TO COUNT THE NUMBER OF ROTATIONS DONE IN A SORTED ARRAY ****/
/* The array has already been assumed ***/

#include <stdio.h>

int count_rotation(int array[], int size);

int main(){
	int array[7] = { 6, 7, 1, 2, 3, 4, 5 };
	int size = sizeof(array)/sizeof(array[0]);
	printf("Number of rotations =  %d\n", count_rotation(array, size));
	return 0;
}

int count_rotation(int array[], int size)
{
	int count, min = array[0];
	for(count = 0 ; count < size ; count++)
		if(min > array[count])
			break;
	return i;

}
