#include<stdio.h>
#include<string.h>
void main()
{
	char a[50];
	int len,i,r,n,b,ev=0,odd=0;
	abc:
		n=0;
	printf("Enter only numeric type String:-");
	gets(a);
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		switch(a[i])
		{
		
		    case '0':
				b=0;
				break;
			case '1':
				b=1;
				break;
			case '2':
				b=2;
				break;
			case '3':
				b=3;
				break;
			case '4':
				b=4;
				break;
			case '5':
				b=5;
				break;
			case '6':
				b=6;
				break;
			case '7':
				b=7;
				break;
			case '8':
				b=8;
				break;
			case '9':
				b=9;
				break;
			default:
				printf("Entered Value is alphanumeric ");
				goto abc;
		}
			n=n*10;
			n=n+b;
	}
	while(n>0)
	{
		r=n%10;
		if(r%2==0)
		{
			ev=ev+r;
		}
		else
		{
			odd=odd+r;
		}
		n=n/10;
	}
	
	printf("Sum of even number's is:-%d\n",ev);
	printf("\nSum of odd number's is:-%d",odd);
}

