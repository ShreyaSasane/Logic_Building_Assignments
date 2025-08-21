import java.util.*;

class Pattern
{
    public void Pattern(String str)
    {
        int i = 0, j = 0;

        for(i = 1; i <= str.length(); i++)
        {
            for(j = 0; j < str.length(); j++)
            {
                System.out.print(str.charAt(j)+"\t");
            }

            System.out.println();
        }
    }
}
public class program1
{
    public static void main(String A[])
    {
            Scanner sobj = new Scanner(System.in);
            Pattern pobj = new Pattern();
            

            System.out.println("Enter the String");
            String str = sobj.nextLine();
            pobj.Pattern(str);
    }
}
