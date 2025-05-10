////////////////////////////////////////////////////////////////////////////////
//
//  Name            :   Helper.c
//  Description     :   It contains ChkEven function
//  Author          :   Shreya Siddharth Sasane
//  Date            :   08/05/2025
// 
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////
//
//Name          :   Display
//Description   :   Accept number from user and check whether 
//                  number is even or odd.
//Input         :   integer
//Output        :   integer
//Author        :   Shreya Siddharth Sasane
//Date          :   08/05/2025
//
///////////////////////////////////////////////////////////////


int ChkEven(int iNo)
{
    int iNo = 0;
    if((iNo %2) == 0)
    {
       return 1;
    }
    else
    {
        return 0;
    }
}