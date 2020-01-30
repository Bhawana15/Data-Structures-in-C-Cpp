/**** REVERSAL ALGORITHM FOR ARRAY ROTATION ****/
/* Divide the array in different sets and rotate each element in the set, k position to the left(k is number of rotations).
 * Number of sets = gcd(length, number of rotations) where gcd is greatest common divisor.
 * Two loops : Outer loop - number of sets and Inner loop - rotate elements of one set, k positions to the left
 * Outer loop : i = 0 to i < no of sets
 * Element at index j : A[j] = A[(j + k) % n] (%n is used so that after the last index we come back to the index 0 that is we move through the array
 * in a cyclic manner.
 */

#include <stdio.h>
#define SIZE 20

void juggling_algo(int array[], int length, int rotation);
void print_array(int array[], int length);
int gcd(int length, int rotation);

/* DRIVER FUNCTION */
int main()
{
        int i, rotation, length, array[SIZE];

        printf("Enter the length of array:\n");
        scanf("%d", &length);
        printf("Enter the array of length %d :\n", length);
        for(i = 0 ; i < length ; i++)
                scanf("%d", &array[i]);
        printf("Enter the number of times the array ahould be rotated :\n");
        scanf("%d", &rotation);

        if(rotation > length)
                rotation %= length;
        juggling_algo(array, length, rotation);
        return 0;
}

/* function to print the array */
void print_array(int array[], int length){
        int i;
        for(i = 0 ; i < length ; i++)
                printf("%d\t", array[i]);
        printf("\n");
}

void juggling_algo(int array[], int length, int rotation)
{
	int i, j, d, temp, sets = gcd(length, rotation);

	for(i = 0 ; i < sets ; i++)
	{
		j = i;
		temp = array[i];
		while(1)
		{
		        d = (j + rotation) % length;	
			if( d == i)
				break;
			array[j] = array[d];
			j = d;
		}
		array[j] = temp;
	}
	print_array(array, length);
	return;
}	
int gcd(int a, int b)
{
	if(b == 0)
		return a;
	else
		return gcd(b, a % b);
}
