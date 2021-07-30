#include<stdio.h>
#include<conio.h>
int factorial(int);
int main()
{
    int n,i,j,k;
    printf("Enter no. of Rows in Pascal Triangle: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            printf(" ");
        }
        for(k=0;k<n;k++)
        {
            if(i>=k)
            {
                printf("%d ",factorial(i)/(factorial(i-k)*factorial(k)));
            }
        }

        printf("\n");
    }
}
int factorial(int x)
{
    int f=1;
    while(x>1)
    {
        f=f*x;
        x--;
    }
    return f;
}
