//////////////////////////////////////////////////////////////////////
//
//  Name            :   Main.c
//  Description     :   It is the starting point of the application.
//  Author          :   Shreya Siddharth Sasane
//  Date            :   08/05/2025
// 
//////////////////////////////////////////////////////////////////////


int main()
{
    int iValue = 0;
    int bRet = 0;

    printf("Enter Number");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    if(bRet == 1)
    {
        printf("Number is Even : \n");
    }
    else
    {
        printf("Number is odd : \n");
    }

    return 0;
}