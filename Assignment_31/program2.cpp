#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iMask1 = 1, iMask2 = 1, iResut = 0;
    
    iMask1 = iMask1 << 7 - 1;
    iMask2 = iMask2 << 10 - 1;

    iMask1 = ~iMask1;
    iMask2 = ~iMask2;

    iResut = iNo & (iMask1 &iMask2);

    return iResut;
}

int main()
{
    UINT iValue = 0, iRet = 0;
    
    cout<<"please Enter the number : \n";
    cin>>iValue;

    iRet = OffBit(iValue);

    cout<<"Updated number is : "<<iRet<<"\n";

    return 0;
}