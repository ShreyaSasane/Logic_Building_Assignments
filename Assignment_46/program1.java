import java.util.*;

class Pattern
{
    public void Pattern(int iRow, int iCol)
    {
        int i = 0, j = 0;
        char ch = '\0';

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1,ch = 'A'; j <= iCol; j++,ch++)
            {
                System.out.print(ch+"\t");
               
            }

            System.out.println();
        }
    }
}
class program1 
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
