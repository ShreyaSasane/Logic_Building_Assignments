//////////////////////////////////////////////////////////////////////////////
//
//  Name            :   Helper.c
//  Description     :   It contains PrintEven function
//  Author          :   Shreya Siddharth Sasane
//  Date            :   08/05/2025
// 
/////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////
//
//Name          :   PrintEven
//Description   :   Accept one number from user and print that number 
//                  as even or odd.
//Input         :   Integer
//Output        :   Integer
//Author        :   Shreya Siddharth Sasane
//Date          :   08/05/2025
//
////////////////////////////////////////////////////////////////////////



void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }
    int i = 0;
    for(i = 1; i <= iNo; i++)
    {
        printf("%d\n", i*2);
    }
}