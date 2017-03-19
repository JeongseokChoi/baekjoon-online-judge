import java.util.Scanner;

public class Main {
    public static void main(String[] args)
    {
        Scanner s = new Scanner(System.in);
        int totalScore = 0;
        for (int i = 0; i < 5; i++)
        {
            int score = s.nextInt();
            totalScore += (score > 40)? score : 40;
        }
        System.out.println(totalScore / 5);
        s.close();
    }
}
