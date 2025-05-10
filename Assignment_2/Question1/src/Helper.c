////////////////////////////////////////////////////////////////////////////////
//
//  Name            :   Helper.c
//  Description     :   The function is used to display * using while loop
//  Author          :   Shreya Siddharth Sasane
//  Date            :   08/05/2025
// 
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////
//
//Name          :   Display
//Description   :   used to display * using while loop
//Input         :   integer
//Output        :   no output
//Author        :   Shreya Siddharth Sasane
//Date          :   08/05/2025
//
///////////////////////////////////////////////////////////////

void Display(int iNo)
{
  int iCnt = 0;
  iCnt = 1;
  while(iCnt <= iNo)
  {
    printf("*\n");
    iCnt++;
  }   
}