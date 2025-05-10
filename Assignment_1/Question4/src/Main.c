int main()
{
    int iValue = 0;
    int bRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    bRet = Check(iValue);
    
    if(bRet == 1)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not divisible by 5");
    }
    
    return 0;
}