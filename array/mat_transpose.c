/*Transpose of a Matrix*/

#include <stdio.h>

int main()
{
	int i,j,a[3][3];

	printf("Enter the value of a 3*3 matrix\n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[j][i]);
		}
		printf("\n");
	}

	return 0;
}

