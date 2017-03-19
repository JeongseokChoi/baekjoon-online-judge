public class Main
{
    public static void main(String[] args)
    {
        java.util.Scanner s = new java.util.Scanner(System.in);

        int[][] score = new int [5][4];
        int[] totalScore = new int [] {0, 0, 0, 0, 0};

        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                totalScore[i] += s.nextInt();
            }
        }

        int winner = 0;
        for (int i = 1; i < 5; i++)
        {
            if (totalScore[winner] < totalScore[i])
            {
                winner = i;
            }
        }

        System.out.println(Integer.toString(winner + 1) + " " + totalScore[winner]);

        s.close();
    }
}
