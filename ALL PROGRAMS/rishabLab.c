#include<stdio.h>
#include<string.h>
void main() // MAIN FUNCTION START
{
char a[100];
int n,i,l,c,even=0,odd=0,flag=0;

printf("Enter string: ");
gets(a); // GETTING STRING
n=strlen(a); // GETTING THE LENGTH OF STRING
for(i=0;i<n;i++)
{
l=a[i]; // STORING ASCII VALUE OF STRINS’S CHARACTER
if(l>=49&&l<=57) // CHECKING ASCII VALUE FOR NUMERIC DATA
{
flag=1;
c=l-48; //FORMULA FOR GETTING NUMERIC VALUE
if(c%2==0) //CHECKING IF NO. IS EVEN OR ODD
{
even+=c; // SUM OF EVEN NO.
}
else
{
odd+=c; //SUM OF ODD NO.
}
}
else
{
flag=0;
printf("\nEnetred data is alpha numeric");
break;
}
}
if(flag==1)
{
printf("\nSum of even =%d",even);
printf("\nSum of odd =%d",odd);
}
}

