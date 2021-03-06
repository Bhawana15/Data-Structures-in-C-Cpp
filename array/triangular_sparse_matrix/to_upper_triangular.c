/******* TO PRINT LOWER TRAIANGULAR SPARSE MATRIX FROM 1D ARRAY ********/
  
#include <stdio.h>
#define SIZE 20

void to_upper_triangular(int matrix[], int length);

int main()
{
        int i, matrix[SIZE], length;

        printf("Enter the length of your array :\t");
        scanf("%d", &length);
        printf("Enter your array :\n");
        for(i = 0 ; i < length ; i++)
                scanf("%d", &matrix[i]);

        to_upper_triangular(matrix, length);
        return 0;
}

void to_upper_triangular(int matrix[], int length){
        int i, j, count, upper_tri[length][length];

        for(i = 0 ; i < length ; i++){
                count = 0;
                for(j = 0 ; j < length ; j++){
                        if(i <= j){
                                upper_tri[i][j] = matrix[count];
                                count++;
                        }
                        else
                                upper_tri[i][j] = 0;
                }
        }
  printf("The upper triangular matrix obtained from the given array is :\n");
        for(i = 0 ; i < length ; i++){
                for(j = 0 ; j < length ; j++)
                        printf("%d\t", upper_tri[i][j]);
                printf("\n");
        }
} 
