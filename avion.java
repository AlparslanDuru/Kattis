import java.util.Scanner;
import java.lang.String;

public class avion
{
    public static void main(String[] args) {
        
        String str;
        int counter=0;
        Scanner scan = new Scanner(System.in);
        for (int i=1; i<6; i++)
        {
            str = scan.nextLine();
            if (str.contains("FBI"))
            {
                System.out.println(i);
                counter++;
            }
        }
        
        if (counter==0)
            System.out.println("HE GOT AWAY!");
        
    }
}
