#include<stdio.h>

void struprx(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        str++;
    }
}
int main()
{
    char arr[20];

    printf("\n Enter string ");
    scanf("%[^'\n']s",arr);

    strluprx(arr);

    return 0;
}