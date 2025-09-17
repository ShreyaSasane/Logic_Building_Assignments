#include<iostream>
using namespace std;

typedef unsigned int UINT;
UINT OffBit(UINT iNo)
{
    UINT iMask = 1, iResult = 0;

    iMask = iMask << 7-1;

    iMask = ~iMask;

    iResult = iNo & iMask;

    return iResult;
}
int main()
{
    UINT iValue = 0, iRet = 0;

    cout<<"Please enter the number : \n";
    cin>>iValue;

    iRet = OffBit(iValue);

    cout<<"Updated number is : "<<iRet<<"\n";
    
    return 0;
}