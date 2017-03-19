import java.util.Scanner;



public class Main
{
    private static int nCases;

    public static void main(String[] args)
    {
        Scanner s = new Scanner(System.in);

        nCases = s.nextInt();
        for (int i = 0; i < nCases; i++)
        {
            int x1, y1, r1, x2, y2, r2;
            x1 = s.nextInt();
            y1 = s.nextInt();
            r1 = s.nextInt();
            x2 = s.nextInt();
            y2 = s.nextInt();
            r2 = s.nextInt();

            double distance = Math.sqrt(Math.pow(x1 - x2, 2) + Math.pow(y1 - y2, 2));
            double radiusSum = r1 + r2;
            double radiusDifference = Math.abs(r1 - r2);

            if (distance == 0 && radiusDifference == 0)
                System.out.println("-1");
            else if (distance == radiusSum || distance == radiusDifference)
                System.out.println("1");
            else if (distance < radiusSum && distance > radiusDifference)
                System.out.println("2");
            else if (distance > radiusSum)
                System.out.println("0");
            else if (distance < radiusDifference)
                System.out.println("0");
        }

        s.close();
    }
}
