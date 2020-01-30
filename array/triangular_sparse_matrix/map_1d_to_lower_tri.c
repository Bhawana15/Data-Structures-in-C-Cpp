/**** PROGRAM TO MAP 1D ARRAY TO LOWER TRIANGULAR SPARSE MATRIX *****/
/* number of non-zero elements in lower triangular sparse matrix = n(n+1)/2
 * number of zero elements in a lower triangular sparse matrix = n(n-1)/2    */

#include <stdio.h>
#define SIZE 20

void lower_triangular(int matrix[], int n);

int main()
{
	int matrix[SIZE], i, n, nonzero_elements, zero_elements, length;

	printf("Enter the value of \"N\" such that the lower triangular matrix will be a NxN matrix :\n");
        scanf("%d", &n);
	zero_elements = n*(n-1)/2 ;
	printf("Number of zero elements in the %d x %d lower triangular sparse matrix is :  %d\n", n, n, zero_elements);
	nonzero_elements = n*(n+1)/2 ;
	printf("Number of non-zero elements in the %d x %d lower triangular sparse matrix is :  %d\n", n, n, nonzero_elements);
	printf("Enter %d elements for the array :\n", nonzero_elements);
	for(i = 0 ; i < nonzero_elements ; i++)
		scanf("%d", &matrix[i]);
	if(i >= nonzero_elements)
		printf("The required array is filled !!! You cannot enter more elements \n");
	
	lower_triangular(matrix, n);
	return 0;
}

void lower_triangular(int matrix[], int n)
{
	int row, col, count = 0, lower_tri[n][n];

	/******* MAPPING OF 1D ARRAY INTO LOWER TRIANGULAR SPARSE MATRIX ARRAY ********/
	for(row = 0 ; row < n ; row++){
		for(col = 0 ; col < n ; col++){
			if(row >= col){
			        lower_tri[row][col] = matrix[count++];
			}
			else
				lower_tri[row][col] = 0;
		}
	}
	/***** MAPPING ENDS ******/

	printf("Your lower triangular matrix is :\n");
	for(row = 0 ; row < n ; row++){
		for(col = 0 ; col < n ; col++)
			printf("%d\t", lower_tri[row][col]);
		printf("\n\n\n");
	}
}
