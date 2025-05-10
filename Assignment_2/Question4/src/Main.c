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
    int iCount = 0;

    printf("Enter Number");
    scanf("%d",&iValue);

    printf("Enter Frequency");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}