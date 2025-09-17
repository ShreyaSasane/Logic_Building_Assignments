#include<iostream>
using namespace std;

typedef unsigned int UINT; 

UINT ONBit(UINT iNo, int iPos)
{
    UINT iMask = 1;
    int iResult = 0;

    iMask = iMask << (iPos - 1);

    iResult = iNo | iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0, iRet = 0;
    int iLocation = 0;
    
    cout<<"Enter the number : \n";
    cin>>iValue;

    cout<<"Enter the position : \n";
    cin>>iLocation;

    iRet = ONBit(iValue, iLocation);

    cout<<"Updated number is "<<iRet<<"\n";

    return 0;
}