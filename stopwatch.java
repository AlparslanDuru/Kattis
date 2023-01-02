import java.util.Scanner;
import java.util.*;
public class stopwatch
{
	public static void main(String[] args) {
		int n, count=0;
		Scanner scan = new Scanner(System.in);
		
		n = scan.nextInt();
		
        int arr[] = new int[n];
        
        for(int i=0; i<n; i++)
            arr[i]= scan.nextInt();

        if(n%2 == 1)
            System.out.println("still running");
        else
        {
            for (int i=0; i<n/2; i++)
                count += arr[i*2 + 1] - arr[i*2];
            
            System.out.println(count);
        }
    }
}
