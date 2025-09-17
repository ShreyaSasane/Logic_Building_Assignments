#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT CountONBit(UINT iNo)
{

    int iCount = 0;

    while(iNo > 0)
    {
        if((iNo & 1) != 0)
        {
             iCount++;
           
        }
        iNo = iNo >> 1;
    }
    return iCount;
    
}

int main()
{
    UINT iValue = 0, iRet = 0;
    
    cout<<"please Enter the number \n";
    cin>>iValue;

    iRet = CountONBit(iValue);

    cout<<"Number of on bits are : "<<iRet<<"\n";

    return 0;
}