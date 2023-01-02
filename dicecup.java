import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        
        Scanner scan = new Scanner(System.in);
        int n, m, lowest;
        
        n = scan.nextInt();
        m = scan.nextInt();
        
        if(n > m)
            lowest = m + 1;
        else
            lowest = n + 1;
        
        System.out.println(lowest);
        
        for(int i = 1; i <= Math.abs(n-m); i++)
            System.out.println(lowest+i);
    }
}
