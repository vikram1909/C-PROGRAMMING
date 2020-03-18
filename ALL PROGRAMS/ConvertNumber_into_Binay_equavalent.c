#include<stdio.h>
int  main()
{
	unsigned int num;
	int i;
	printf("Enter that number which you want to convert into Binary : ");
	scanf("%u",&num);
	printf("\nBinary Equivalent of that number is : ");
	for(i=0;i<16;i++)
	{
		printf("%d ",(num << i & 1 << 15 )? 1:0);
	}
}

