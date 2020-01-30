/*** PROGRAM TO SEARCH AN ELEMENT IN A 1D ARRAY USING FIBONACCI SEARCH ***/

#include <stdio.h>
#define SIZE 20

int min(int x, int y) { return (x<=y) ? x : y ; }

int fibonacci_search(int array[], int length, int element);

int main()
{
        int count, length, element, index = -1, array[SIZE];
        printf("##########  PROGRAM OF FIBONACCI SEARCH IN 1D ARRAY  ##########\n");
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

        index = fibonacci_search(array, length, element);
        (index == -1) ? printf("ELEMENT NOT FOUND\n") : printf("Element %d is at index %d\n", element, index);
        return 0;
}

int fibonacci_search(int array[], int length, int element)
{
	int fib2 = 0; // (m-2)'th fibonacci number
        int fib1 = 1; // (m-1)'th fibonacci number
        int fib = fib1 + fib2; // m'th fibonacci number
	int offset = -1; // offset is the length of eliminated range, now its -1, means no element is eliminated */
	int i, j, temp;

	/******* SORTING BEGINS *******/
        printf("########## Sorting your array ###########\nSorted array is:\n");
        for(i = 0 ; i < length ; i++){
                for(j = i+1 ; j < length ; j++){
                        if(array[i] > array[j]){
                                temp = array[i];
                                array[i] = array[j];
                                array[j] = temp;
                        }
                }
        }

        for(i = 0 ; i < length ; i++)
                printf("%d\t", *(array+i));
        printf("\n");
        /******** SORTING ENDS *********/

	/* fibonacci number greater than or equal to the length of array */
	while(fib < length){
		fib2 = fib1;
		fib1 = fib;
		fib = fib1 + fib2;
	}


	/* Searching the element from end of the aray to the start until fib1 becomes 1 and hence fib2 will become 0 */
	while(fib > 1){
		/* Sometimes offset+fib2 is not a valid location(greater than the length of array), so length-1 will be used */
		i = min(offset + fib2, length - 1);

		/* ELiminating that part of the array which is less than the element by setting offset = i */
		if(array[i] < element){
			fib = fib1;
			fib1 = fib2;
			fib2 = fib - fib1;
			offset = i;
		}

		/*ELiminating that part of the array which is greater than the element */
		else if(array[i] > element){
			fib = fib2;
			fib1 = fib1 - fib2;
			fib2 = fib - fib1;
		}

		/* Element found at index i */
		else 
			return i;
	}

       /* comparing the last element with x */
       if(fib1 && array[offset+1] == element)
	       return offset+1; 
  
       /* element not found */
       return -1;
}
