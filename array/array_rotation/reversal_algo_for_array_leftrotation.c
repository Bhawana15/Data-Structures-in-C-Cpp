/**** REVERSAL ALGORITHM FOR ARRAY ROTATION ****/
/** Example : array = { 1, 2, 3, 4, 5, 6}, rotations = 2
 * {2, 1, 3, 4, 5, 6} reverse 0 to rotations-1
 * {2, 1, 6, 5, 4, 3} reverse roations to length-1
 * {3, 4, 5, 6, 1, 2} reverse 0 to length-1
 * Therefore three calls are required for left rotations  */ 

#include <stdio.h>
#define SIZE 20

void leftrotate(int array[] , int num_of_rotation, int length);
void print_array(int array[], int length);
void reverse(int array[], int start, int end);

int main()
{
	int i, num_of_rotation, length, array[SIZE];

	printf("Enter the length of array:\n");
	scanf("%d", &length);
	printf("Enter the array of length %d :\n", length);
	for(i = 0 ; i < length ; i++)
		scanf("%d", &array[i]);
	printf("Enter the number of times the array ahould be rotated :\n");
	scanf("%d", &num_of_rotation);

	if(num_of_rotation > length)
		num_of_rotation %= length;
	leftrotate(array, num_of_rotation, length);
        print_array(array, length);
	return 0;
}

void leftrotate(int array[] , int num_of_rotation, int length)
{
	if(num_of_rotation == 0){
		printf("Array after no rotations will be same\n");
		return;
	}
	reverse(array, 0, num_of_rotation-1);
	reverse(array, num_of_rotation, length-1);
	reverse(array, 0, length-1);
}


void print_array(int array[], int length){
	int i;
	for(i = 0 ; i < length ; i++)
		printf("%d\t", array[i]);
	printf("\n");
}

void reverse(int array[], int start, int end)
{
	int temp = 0, length = sizeof(array)/sizeof(array[0]);
	while(start < end){
		temp = array[start];
		array[start] = array[end];
		array[end] = temp;
		start++;
		end--;
	}
}
