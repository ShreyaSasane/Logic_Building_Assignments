#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit %= 0)
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }
        iNo = iNo/10;
    }
}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("%d",&iValue);
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("\n It contains Zero ");
    }
    else
    {
        printf("\n There is no Zero");
    }
    return 0;
}