#include<stdio.h>
#include<conio.h>
int pascla(int);
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
                printf("%d ",pascal(i)/(pascal(i-k)*pascal(k)));
            }
        }

        printf("\n");
    }
}
int pascal(int x)
{
    int f=1;
    while(x>1)
    {
        f=f*x;
        x--;
    }
    return f;
}
