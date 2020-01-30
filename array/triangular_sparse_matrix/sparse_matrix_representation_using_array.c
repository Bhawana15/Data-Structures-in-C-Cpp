/* PROGRAM TO REPRESENT SPARSE MATRIX USING ARRAY */
/* Sparse matrix has already been assumed */

#include <stdio.h>

int main()
{
	int row, col, index = 0, size = 0, sparse[4][5] = { {0, 0, 1, 0, 0}, {0, 0, 0, 2, 0}, {3, 0, 0, 0, 0}, {0, 0, 0, 0, 4} };
	printf("PROGRAM TO REPRESENT SPARSE MATRIX USING ARRAY\n");
	printf("##############################################\n");

	printf("The sparse matrix is :\n");
	for(row = 0 ; row < 4 ; row++){
		for(col = 0 ; col < 5 ; col++)
                        printf("%d\t", sparse[row][col]);
                printf("\n\n");
        }

	/* Calculation of size of array that will store the elements of sparse matrix */
	for(row = 0 ; row < 4 ; row++)
		for(col = 0 ; col < 5 ; col++)
			if(sparse[row][col] != 0)
				size++;

	/* Making compact matrix to store the elements */
	int compact_matrix[3][size];
	for(row = 0 ; row < 4 ; row++){
		for(col = 0 ; col < 5 ; col++){
			if(sparse[row][col] != 0){
				compact_matrix[0][index] = row;
				compact_matrix[1][index] = col;
				compact_matrix[2][index] = sparse[row][col];
				index++;
			}
		}
	}
	
	// Printing the compact matrix 
	printf("The Compact Matrix is :\n");
	for(row = 0 ; row < 3 ; row++){
                for(col = 0 ; col < 4 ; col++)
                        printf("%d\t", compact_matrix[row][col]);
		
		if(row == 0)
			printf("ROW\n\n");
		else if(row == 1)
			printf("COLUMN\n\n");
		else
			printf("VALUE\n\n");
        }

	return 0;
}
