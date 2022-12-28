import java.util.Scanner;
import java.util.*;

public class detaileddifferences
{
    public static void main(String[] args) {
        
        Scanner scan = new Scanner(System.in);
        String str1, str2;
        int testCases = scan.nextInt();
        scan.nextLine();
        
        for (int i=0; i<testCases; i++)
        {
            str1 = scan.nextLine();
            str2 = scan.nextLine();
            System.out.println(str1);
            System.out.println(str2);
            
            char[] str10 = str1.toCharArray();
            char[] str20 = str2.toCharArray();
        
            for (int j=0; j<str1.length(); j++)
            {
                if (str10[j] == str20[j])
                    System.out.print(".");
                else 
                    System.out.print("*");
            }
            System.out.println();
        }
    }
}
