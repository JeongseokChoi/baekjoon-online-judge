import java.util.Scanner;


public class Main
{
    public static void main(String[] args)
    {
        Scanner s = new Scanner(System.in);

        int out, in, curr = 0, max = 0;
        while (true)
        {
            out = s.nextInt();
            in = s.nextInt();
            curr += in - out;
            if (curr > max)
                max = curr;
            if (in == 0)
                break;
        }
        System.out.println(max);

        s.close();
    }
}
