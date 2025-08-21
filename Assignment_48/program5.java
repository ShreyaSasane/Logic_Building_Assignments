import java.util.*;

class Pattern
{
    public void Pattern(String str)
    {
        int i = 0, j = 0;

        for(i = 0; i < str.length(); i++)
        {
            for(j = 0; j < str.length(); j++)
            {
                if(i > j)
                {
                    System.out.print(str.charAt(j)+"\t");
                }
            }

            System.out.println();
        }

        for(i = str.length(); i >= 0; i--)
        {
            for(j = 0; j < str.length(); j++)
            {
                if(i > j)
                {
                    System.out.print(str.charAt(j)+"\t");
                }
            }

            System.out.println();
        }
    }
}
class program5
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
