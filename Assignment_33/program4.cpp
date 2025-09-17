#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool ChkBit(UINT iNo, int iPos1, int iPos2)
{
    UINT iMask = 0x000000021;
    int iResult = 0;

    iMask = iMask << (iPos1 - 1);
    
    iMask = iMask << (iPos2 -1);

    iMask = iMask << (iPos1 & iPos2);
    
    iResult = iNo ^ iMask;

    return iResult;

}
int main()
{
    int iValue = 0, iposition1 = 0, iposition2 = 0;
    bool bRet = false;

    cout<<"Enter the number  \n";
    cin>>iValue;

    cout<<"Enter the first position \n";
    cin>>iposition1;

    cout<<"Enter the second position \n";
    cin>>iposition2;

    bRet = ChkBit(iValue, iposition1, iposition2);

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