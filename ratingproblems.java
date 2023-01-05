import java.util.Scanner;
import java.util.Arrays;

class ratingproblems{
    public static void main(String[] args){
        
        Scanner scan = new Scanner(System.in);
        int n, k, num=0;
        double  minRating, maxRating;
    
        
        n = scan.nextInt();
        k = scan.nextInt();
        
        for (int i=0; i<k; i++)
            num += scan.nextInt();
        
        minRating = (num + -3 * (n - k)) / (n * 1.0);
        minRating = (num + 3 * (n - k)) / (n * 1.0);
        
        System.out.println(minRating + " " + maxRating);
    }
}
