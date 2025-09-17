#include<iostream>
using namespace std;

typedef unsigned int UINT; 

bool ChkBit(UINT iNo, int iPos)
{
    UINT iMask = 1; 
    int iResult = 0;

    iMask = iMask << (iPos - 1);

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    UINT iValue = 0;
    int iLocation = 0;
    bool bRet = false;

    cout<<"Enter the number : \n";
    cin>>iValue;

    cout<<"Enter the position : \n";
    cin>>iLocation;

    bRet = ChkBit(iValue, iLocation);

    if(bRet == true)
    {
        cout<<"TRUE \n";
    }
    else
    {
        cout<<"FALSE \n";
    }


    return 0;
}