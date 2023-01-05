import java.util.Scanner;
import java.util.Arrays;

class pet{
    public static void main(String[] args){
        
        int n=0, max=0;
        Integer[] arr = {0, 0, 0, 0, 0};
        
        Scanner scan = new Scanner(System.in);
        
        for (int i=0; i<5; i++)
        {
            for (int j=0; j<4; j++)
                n += scan.nextInt();
                
            arr[i] = n;
            n=0;
        }
        
        for (int i : arr)
            if (i>max)
                max = i;
        
        int getArrayIndex = Arrays.asList(arr).indexOf(max);

        System.out.println(getArrayIndex + 1 + " " + max);
    }
}
