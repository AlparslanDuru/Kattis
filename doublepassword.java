import java.util.Scanner;

public class doublepassword {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String password1 = sc.nextLine();
        String password2 = sc.nextLine();
        int count = 0;
        for (int i = 0; i < 10000; i++) {
            String guess = String.format("%04d", i);
            boolean valid = true;
            for (int j = 0; j < 4; j++) {
                if (guess.charAt(j) != password1.charAt(j) && guess.charAt(j) != password2.charAt(j)) {
                    valid = false;
                    break;
                }
            }
            if (valid) count++;
        }
        System.out.println(count);
    }
}
