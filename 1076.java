import java.util.Scanner;



public class Main
{
    public static long resistance = 0;


    public static void main(String[] args)
    {
        Scanner s = new Scanner(System.in);

        resistance += (long)colorToInt(s.next()) * 10;
        resistance += (long)colorToInt(s.next());
        resistance *= (long)colorToInt2(s.next());
        System.out.println(resistance);

        s.close();
    }


    public static int colorToInt(String s)
    {
        if (s.equals("black"))
            return 0;
        else if (s.equals("brown"))
            return 1;
        else if (s.equals("red"))
            return 2;
        else if (s.equals("orange"))
            return 3;
        else if (s.equals("yellow"))
            return 4;
        else if (s.equals("green"))
            return 5;
        else if (s.equals("blue"))
            return 6;
        else if (s.equals("violet"))
            return 7;
        else if (s.equals("grey"))
            return 8;
        else if (s.equals("white"))
            return 9;
        else
            return -1;
    }


    public static int colorToInt2(String s)
    {
        if (s.equals("black"))
            return 1;
        else if (s.equals("brown"))
            return 10;
        else if (s.equals("red"))
            return 100;
        else if (s.equals("orange"))
            return 1000;
        else if (s.equals("yellow"))
            return 10000;
        else if (s.equals("green"))
            return 100000;
        else if (s.equals("blue"))
            return 1000000;
        else if (s.equals("violet"))
            return 10000000;
        else if (s.equals("grey"))
            return 100000000;
        else if (s.equals("white"))
            return 1000000000;
        else
            return -1;
    }
}
