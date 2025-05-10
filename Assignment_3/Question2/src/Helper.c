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


void DisplayFactor(int iNo)
{
    int i = 0;
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(i = 1; i <= iNo; i++)
    {
        if((iNo %1 == 0) && (i %2 == 0))
        {
            printf("%d\n",i);
        }
    }
}