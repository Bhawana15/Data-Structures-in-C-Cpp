/* Tik-Tak-Toe Game */

#include <stdio.h>

int main()
{
	int a[3][3],i,j,row,col,t=0,s;

	printf("TIK-TAK-TOE GAME\nThere will be two Players : A and B.\n*****All The Best*****\nThe Game Strats This Way.\n");
	while(t<=9)
	{     
		if(t==0)
		{
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					printf("-\t");
				}
				printf("\n");
			}
		}

		else
		{
			if(t%2!=0)
			{       printf("PLAYER 1\nEnter the number of rows and columns:\n");
				scanf("%d  %d",&row,&col);
				printf("Player 1: Enter 1\n");
				s=1;
			}
			else
			{
				printf("PLAYER 2\nEnter the number of rows and columns:\n");
				scanf("%d %d",&row,&col);
				printf("Player 2: Enter 0\n");
				s=0;
			}
			row--;
			col--;
		}

		if((a[0][0]==a[0][1] && a[0][0]==a[0][2]) || (a[0][0]==a[1][0] && a[0][0]==a[2][0]) || (a[0][0]==a[1][1] && a[0][0]==a[2][2]) || 
				(a[2][0]==a[2][1] && a[2][0]==a[2][2]) || (a[0][2]==a[1][2] && a[0][2]==a[2][2]))
		{
			if(s==1)
			{
				printf("Player 1 is the WINNER.\nCONGRATULATIONS\n");
				break;
			}
			else if(s==0)
			{
				printf("Player 2 is the WINNER>\nCONGRATULATIONS\n");
				break;
			}
		}
		else if(t==9)
			printf("The match is a DRAW.\n");
		t++;
	}
	return 0;
}
