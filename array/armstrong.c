/* Armstrong Number */

#include <stdio.h>

int main()
{
	int num,i,d,sum=0;

	for(num = 100;num<=500;num++)
	{
		d=num;
	while(num!=0)
	{
		i=num%10;
		num=num/10;
		sum = sum + i*i*i;
	}

	if(sum == d)
		printf("%d is an Armstrong Number\n",d);
	}

	return 0;
}

