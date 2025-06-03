#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[], int iLength)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt]) == 11)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
int main()
{
    int iSize = 0, iCnt = 0;
    int *p = NULL;
    bool bRet = false;
    printf("\n Enter number of elements : ");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize*sizeof(int));

    if(NULL == p)
    {
        printf("Unable to allocate memory ");
        return -1;
    }

    printf("\n Enter the elements :");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : ",iCnt++);
        scanf("%d",&p[iCnt]);
    }

    bRet = Check(p,iSize);

    if(bRet == true)
    {
        printf(" 11 is present");
    }
    else
    {
        printf("\n 11 is not present");
    }
    free(p);

    return 0;
}