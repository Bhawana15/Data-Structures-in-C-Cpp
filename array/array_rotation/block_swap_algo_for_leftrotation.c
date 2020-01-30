// ERROR
/****** PROGRAM FOR BLOCK SWAP ALGORITHM FOR LEFT ROTATION OF ONE DIMENSIONAL ARRAY USING RECURSION *****/

#include <stdio.h>
#define SIZE 20

void leftrotate(int array[] , int rotation, int length);
void print_array(int array[], int length);
void swap(int array[], int start, int end, int d);

/* Driver Function for Block Swap ALgorithm */
int main()
{       int i, rotation, length, array[SIZE];

	printf("PROGRAM FOR BLOCK SWAP ALGORITHM FOR LEFT ROTATION OF ONE DIMENSIONAL ARRAY USING RECURSION\n");
        printf("Enter the length of array:\n");
        scanf("%d", &length);
        printf("Enter the array of length %d :\n", length);
        for(i = 0 ; i < length ; i++)
                scanf("%d", &array[i]);
        printf("Enter the number of times the array should be rotated :\n");
        scanf("%d", &rotation);

        if(rotation > length)
                rotation %= length;
        leftrotate(array, rotation, length);
        print_array(array, length);
        return 0;
}

/* Recursive function for rotation of array */
void leftrotate(int array[] , int rotation, int length)
{
	/* If number of rotation is zero or length of the array, then the array will be same */
	if(rotation == (0 || length))
			return;

	/* If number of rotation is exactly half of the array size that means A and B are of same size */
	if(rotation == length - rotation){
		swap(array, 0, length - rotation, rotation);
		return;
	}

	/* If A is shorter than B will be divided */
	if(rotation < length - rotation){
		swap(array, 0, length - rotation, rotation);
		leftrotate(array, rotation, length - rotation);
	}

	/* If B is shorter, A will be divided */
	else{
		swap(array, 0, rotation, length - rotation);
		leftrotate(array + length - rotation, 2 * rotation - length, rotation);
	}
}

void print_array(int array[], int length){
        int i;
        for(i = 0 ; i < length ; i++)
                printf("%d\t", array[i]);
       printf("\n");
}

/* Function to swap two arrays of length d where one array is starting from "start" and the other is starting from "end" */
void swap(int array[], int start, int end, int d)
{
        int i, temp;
	for(i = 0 ; i < d ; i++){
	        temp = array[start + i];
		array[start + i] = array[end + i];
		array[end + i] = temp;
	}
}	
