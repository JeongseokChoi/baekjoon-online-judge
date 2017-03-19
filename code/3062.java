import java.util.Scanner;
import java.lang.StringBuilder;

public class Main
{
    public static void main(String[] args)
    {
        Scanner s = new Scanner(System.in);
        boolean done = false;
        int nCase = s.nextInt();
        for (int n = 0; n < nCase; n++)
        {
            done = false;
            String numStr = s.next();
            StringBuilder str = new StringBuilder(numStr);
            int original = Integer.parseInt(numStr);
            int reversed = Integer.parseInt(str.reverse().toString());
            int sum = original + reversed;
            String sumStr = Integer.toString(sum);
            for (int i = 0; i < sumStr.length() / 2; i++)
            {
                if (sumStr.charAt(i) != sumStr.charAt(sumStr.length() - 1 - i))
                {
                    System.out.println("NO");
                    done = true;
                    break;
                }
            }
            if (done == false)
                System.out.println("YES");
        }
        s.close();
    }
}
