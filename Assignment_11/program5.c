#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt*2);
    }
}
int main()
{
    int iValue = 0;

    printf("\n Enter the number : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}