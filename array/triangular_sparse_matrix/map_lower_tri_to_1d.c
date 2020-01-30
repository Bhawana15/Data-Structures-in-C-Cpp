/***** PROGRAM TO MAP LOWER TRIANGULAR SPARSE MATRIX TO 1 DIMENSIONAL ARRAY MATRIX *******/
/*** INCOMPLETE - ERROR IN FORMULA ****/

#include <stdio.h>
#define SIZE 10

void to_1d_array(int n, int lower_tri[n][n], int nonzero_elements);

int main()
{
	int lower_tri[SIZE][SIZE], row, col, n, nonzero_elements, zero_elements;

	printf("PROGRAM TO MAP LOWER TRIANGULAR SPARSE MATRIX TO 1 DIMENSIONAL ARRAY MATRIX\n");
	printf("Enter the value of \"N\" such that N x N is the order of lower-triangular sparse matrix :\n");
	scanf("%d", &n);
	nonzero_elements = n*(n+1)/2;
	zero_elements = n*(n-1)/2;
	printf("Enter the lower triangular matrix of order %d x %d :\n", n, n); 
	printf("There should be %d non zero elements and %d zero elements:\n", nonzero_elements, zero_elements);
	for(row = 0 ; row < n ; row++){
		printf("Enter row-%d :\n", row+1);
		for(col = 0 ; col < n ; col++)
			scanf("%d", &lower_tri[row][col]);
	}

	to_1d_array(n, lower_tri, nonzero_elements);
	return 0;
}


void to_1d_array(int n, int lower_tri[n][n], int nonzero_elements)
{
	int row, col, index, matrix[nonzero_elements];

	for(row = 0 ; row < n ; row++){
		for(col = 0 ; col < n ; col++){
			if(row >= col){
	                	index = (row)*(row-1)/2  + (col);
				matrix[index] = lower_tri[row][col];
			}
		}
	}

	printf("One Dimensional array is :\n");
	for(index = 0 ; index < nonzero_elements ; index++)
			printf("%d\t", matrix[index]);
	printf("\n");
}
