import java.util.Scanner;
import java.util.Arrays;

class Main{
    public static void main(String[] args){
        
        Scanner scan = new Scanner(System.in);
        int n, k, num=0;
        double average, minRating, maxRating;
        
        
        n = scan.nextInt();
        k = scan.nextInt();
        
        int[] arr = new int[k];
        
        for (int i=0; i<k; i++)
        {
            arr[i] = scan.nextInt();
            num += arr[i];
        }
        
        average = num/k*1.0;
        
        minRating = (average + ((-3*(n-k)) / (n-k) * 1.0) ) / n*1.0;
        maxRating = (average + (( 3*(n-k)) / (n-k) * 1.0) ) / n*1.0;
        
        System.out.println(minRating + " " + maxRating);
    }
}
