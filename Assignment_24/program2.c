#include<stdio.h>

int CountSmall(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}
int main()
{
    char Arr[50];
    int iRet = 0;

    printf("\n Enter string : ");
    scanf("%[^'\n']s",Arr);

    iRet = CountSmall(Arr);

    printf(" %d",iRet);
    return 0;
}