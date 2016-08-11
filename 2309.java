import java.util.Scanner;


public class Main
{
    public static void main(String[] args)
    {
        Scanner s = new Scanner(System.in);

        int[] height = new int[9];
        for (int i = 0; i < 9; i++)
        {
            height[i] = s.nextInt();
        }
        int sumOfHeight = 0;
        for (int i = 0; i < 9; i++)
        {
            sumOfHeight += height[i];
        }
        int diff = sumOfHeight - 100;
        for (int i = 0; i < 8; i++)
        {
            for (int j = i + 1; j < 9; j++)
            {
                if (i != j)
                {
                    if (height[i] + height[j] == diff)
                    {
                        height[i] = 0;
                        height[j] = 0;
                    }
                }
            }
        }
        int[] dwarf = new int[7];
        int idx = 0;
        for (int i = 0; i < 9; i++)
            if (height[i] != 0)
                dwarf[idx++] = height[i];
        for (int i = 0; i < 6; i++)
        {
            for (int j = 1; j < 7 - i; j++)
            {
                if (dwarf[j - 1] > dwarf[j])
                {
                    int tmp = dwarf[j - 1];
                    dwarf[j - 1] = dwarf[j];
                    dwarf[j] = tmp;
                }
            }
        }
        for (int i = 0; i < 7; i++)
            System.out.println(dwarf[i]);

        s.close();
    }
}
