/*matrix Multiplication*/

#include <stdio.h>

int main()
{
	int i,j,k,a[3][3],b[3][3],c[3][3]={0};

	printf("Enter the values of matrix A of order 3*3\n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	printf("Enter the values of matrix B of order 3*3\n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}

	printf("The product of matrix A and B is\n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				c[i][j] = c[i][j] + a[i][k]*b[k][j];
			}
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}

	return 0;
}


