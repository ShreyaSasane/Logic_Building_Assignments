#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{
    UINT iMask = 0x000008100;
    int iResult = 0;

    iResult = iNo & iMask;

    return iResult;

}
int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter the number  \n";
    cin>>iValue;

    bRet = ChkBit(iValue);

    if(bRet == true)
    {
        cout<<"TRUE";
    }
    else
    {
        cout<<"FALSE";
    }

    return 0;
}