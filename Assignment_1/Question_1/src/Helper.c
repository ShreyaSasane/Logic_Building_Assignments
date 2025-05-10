//////////////////////////////////////////////////////////////////////////////
//
//  Name            :   Helper.c
//  Description     :   The function used to perform Division of two numbers.
//  Author          :   Shreya Siddharth Sasane
//  Date            :   10/05/2025
// 
/////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////
//
//Name          :   Divide
//Description   :   used to Divide two number
//Input         :   Integer,Integer
//Output        :   Integer
//Author        :   Shreya Siddharth Sasane
//Date          :   10/05/2025
//
///////////////////////////////////////////////////////////////

int Divide(int iNo1, int iNo2)
{
    int Ans = 0;
    if(iNo2 == 0)
    {
        return -1;
    }
    Ans = iNo1/iNo2;
    return Ans;
}