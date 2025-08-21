import java.util.*;

class Pattern
{
    public void Pattern(int iRow, int iCol)
    {   
        int i = 0, j = 0;
        

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; j++)
            {
                System.out.print(j+"\t");
            }

            System.out.println();
        }
    }
}
public class program2
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
