#include<stdio.h>
void strev();
void main()
{
	printf("Enter any string:-");
	strev();
}
void strev()
{
	char ch;
	scanf("%c",&ch);
	if(ch != '\n')
	{
		strev();
		printf("%c",ch);
		//return 0;
	}
	
}
