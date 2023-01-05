import java.util.Scanner;
import java.util.Arrays;

class pet{
    public static void main(String[] args){
        
        int n, max=0;
        int[] arr = new int[5];
        
        Scanner scan = new Scanner(System.in);
        
        for (int i=1; i<6; i++)
        {
            for (int j=0; j<4; j++)
            {
                n += scan.nextInt();
            }
            arr[i] = n;
            n=0;
        }
        
        for (int i : arr)
        {
            if (i>max)
            {
                max = arr[i];
            }
        }
        
        System.out.println(arr.indexOf(max) + " " + max);
    }
}
