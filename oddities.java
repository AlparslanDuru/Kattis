import java.util.Scanner;

class oddities{
    public static void main(String[] args){
        int n, x;
        Scanner scan = new Scanner(System.in);
        n = scan.nextInt();
        
        for (int i=0; i<n; i++)
        {
            x = scan.nextInt();
            if (x%2==0)
                System.out.println(x + " is even");
            else
                System.out.println(x + " is odd");
        }
    }
}
