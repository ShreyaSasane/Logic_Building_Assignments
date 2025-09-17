#include<iostream>
using namespace std;

typedef unsigned int UINT;

void CommonBits(UINT iNo1, UINT iNo2)
{
    int iCount = 0;
    int Comman = iNo1 & iNo2;

    while(Comman != 0)
    {
        if(Comman & 1)
        {
            iCount++;
        }
        Comman = Comman >> 1;
    }

}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    
    cout<<"Enter first number \n";
    cin>>iValue1;

    cout<<"Enter second number \n";
    cin>>iValue2;

    CommonBits(iValue1,iValue2);

    return 0;
}