import java.util.*;

class Pattern
{
    public void Pattern(int iRow, int iCol)
    {
        int i = 0, j = 0;
        char ch1 = '\0', ch2 = '\0';

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1, ch1 = 'A', ch2 = 'a'; j <= iCol; j++,ch1++, ch2++)
            {
               if(i % 2 == 0)
               {
                    System.out.print(ch2+"\t");
               }
               else
               {
                    System.out.print(ch1+"\t");
               }
               
            }

            System.out.println();
        }
    }
}
class program2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        Pattern pobj = new Pattern();
        int Rvalue = 0;
        int Cvalue = 0;

        System.out.println("Enter the number of Rows :");
        Rvalue = sobj.nextInt();

        System.out.println("Enter the number of Columns :");
        Cvalue = sobj.nextInt();

        pobj.Pattern(Rvalue,Cvalue);

    }
}
