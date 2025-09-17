#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask1 = 0x00000240,  iResult = 0;

    iResult = iNo ^ iMask1;

    return iResult;

}

int main()
{
    UINT iValue = 0, iRet = 0;
    
    cout<<"please Enter the number : \n";
    cin>>iValue;

    iRet = ToggleBit(iValue);

    cout<<"Updated number is : "<<iRet<<"\n";

    return 0;
}