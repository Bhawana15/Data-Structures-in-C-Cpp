/********** PROGRAM TO PRINT LOWER AND UPPER TRIANGULAR SPARSE MATRIX ARRAY *********/
/********** The array is already assumed in the program *********/

#include <stdio.h>

void lower_triangular(int matrix[3][3], int row, int col);
void upper_triangular(int matrix[3][3], int row, int col);

int main()
{
	int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int i, j, row = 3, col = 3;

	printf("The array is :\n");
	for(i = 0 ; i < 3 ; i++){
		for(j = 0 ; j < 3 ; j++)
			printf("%d\t", matrix[i][j]);
		printf("\n");
	}

	printf("LOWER-TRIANGULAR MATRIX :\n");
	lower_triangular(matrix, row, col);

	printf("UPPER-TRAINGULAR MATRIX:\n");
	upper_triangular(matrix, row, col);

	return 0;
}


void lower_triangular(int matrix[3][3], int row, int col){
	int i, j;
	for(i = 0 ; i < 3 ; i++){
		for(j = 0 ; j < 3 ; j++){
			if(i < j)
				printf("0\t");
			else
				printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}
}

void upper_triangular(int matrix[3][3], int row, int col){
	int i, j;
	for(i = 0 ; i < 3 ; i++){
                for(j = 0 ; j < 3 ; j++){
                        if(i > j)
                                printf("0\t");
                        else
                                printf("%d\t", matrix[i][j]);
                }
                printf("\n");
        }

}
