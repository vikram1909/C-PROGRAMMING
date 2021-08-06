#include<stdio.h>
int BinaryConvertor(int binaryNum)
{
    int rem,base=1,decimalNum=0;
    while(binaryNum>0)
    {
        rem=binaryNum%10;
        decimalNum=decimalNum+rem*base;
        binaryNum=binaryNum/10;
        base=base*2;
    }
    return decimalNum;
}
int main()
{
    int num;
    printf("Enter the Binary numbers combination of 0's and 1's Only: ");
    scanf("%d",&num);
    printf("\nDecimal Value of %d is %d\n",num,BinaryConvertor(num));
}
