import java.util.Scanner;

public class speedlimit {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        while (true)
        {
            int numSets = sc.nextInt();
            
            if (numSets == -1)
                break;

            int distance=0, prevTime=0;
            
            for (int i = 0; i < numSets; i++)
            {
                int speed = sc.nextInt();
                int time = sc.nextInt();

                distance += speed * (time - prevTime);
                prevTime = time;
            }

            System.out.println(distance + " miles");
        }
        sc.close();
    }
}
