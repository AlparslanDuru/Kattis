import java.util.Scanner;
import java.lang.Math;

public class knightpacking
{
    public static void main(String[] args) {
        
        Scanner scan = new Scanner(System.in);
        int a = scan.nextInt();

        if (Math.round((a*a)/2.0)%2 == 1)
                System.out.println("first");
        else 
                System.out.println("second");
        
    }
}
