#include <stdio.h>

int main()
{
	char a[25];
	int ctr=0;

	printf("Enter your Full Name\n");
	scanf("%s",&a[0]);

	for(ctr=0;ctr<=20;ctr++)
	{
		if(ctr==0)
			printf("%c",a[ctr]);
		if(a[ctr]=='\0')
			printf("%c",a[ctr+1]);
	}

	return 0;
}

