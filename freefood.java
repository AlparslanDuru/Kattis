import java.util.*;

public class freefood {
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] days = new int[366];
        
        for (int i = 0; i < n; i++)
        {
            int start = sc.nextInt();
            int end = sc.nextInt();
            
            for (int j = start; j <= end; j++)
                days[j] = 1;
        }
        
        int count = 0;
        for (int i = 0; i < days.length; i++)
        {
            if (days[i] == 1)
                count++;
        }
        
        System.out.println(count);
    }
}
