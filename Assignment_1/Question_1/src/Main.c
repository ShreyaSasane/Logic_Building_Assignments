//////////////////////////////////////////////////////////////////////
//
//  Name            :   Main.c
//  Description     :   It is the starting point of the application.
//  Author          :   Shreya Siddharth Sasane
//  Date            :   08/05/2025
// 
//////////////////////////////////////////////////////////////////////

#include"../include/MyHeader.h"

int main()
{
    int iValue1 = 15, iValue2 = 5;

    int iRet = 0;
    
    iRet = Divide(iValue1,iValue2);

    printf("Division is : %d", iRet);

    return 0;
}