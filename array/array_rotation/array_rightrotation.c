/******** ARRAY ROTATION - CLOCKWISE AND ANTI-CLOCKWISE ************/

#include <stdio.h>
#define SIZE 20

void rightRotation(int array[], int length, int num_of_rotation);
void print_array(int array[], int length, int num_of_rotation);

int main()
{
        int count, length, num_of_rotation, array[SIZE];
        char choice;

        printf("##########  PROGRAM FOR RIGHT ROTATION OF 1D ARRAY  ##########\n");
        printf("\nHow many elements do you want to store in your array of maximum size 20????\n");
        scanf("%d", &length);
        if(length > 20){
                printf("Maximum size of array is 20!!! Enter a number less than equal to 20!!! \n");
                scanf("%d", &length);
        }

        printf("\nEnter the elements of the array:\n");
        for(count = 0 ; count < length ; count++)
                scanf("%d", &array[count]);


        printf("How many rotations do you want???\n");
        scanf("%d", &num_of_rotation);
        rightRotation(array, length, num_of_rotation);
        return 0;
}

/* Function for right rotation of array */
void rightRotation(int array[], int length, int num_of_rotation){
        int i, count, temp;

        for(i = 1 ; i <= num_of_rotation ; i++){
                temp = array[length-1];
                for(count = length-1 ; count > 0 ; count--){
                        array[count] = array[count-1];
                }
                array[0] = temp;
        }
	print_array(array, length, num_of_rotation);
}

void print_array(int array[], int length, int num_of_rotation){
	int i;
	printf("Array after %d rotations :\n", num_of_rotation);
	for(i = 0 ; i < length ; i++)
		printf("%d\t", array[i]);
	printf("\n");
}
