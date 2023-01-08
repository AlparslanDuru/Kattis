import java.util.Scanner;
import java.util.Arrays;

public class ofugsnuid
{
    public static void main(String[] args) {
        
    Scanner scan = new Scanner(System.in);
    int n;
    int [] arr = {1000};
    
    n = scan.nextInt();
    scan.nextLine();   
    
    for (int i=0; i<n; i++)
    {
        arr[i] = scan.nextInt();
    }
    
    for (int i=n; i>0; i--)
    {
        System.out.println(arr[i]);
    }    
    
    }
}
