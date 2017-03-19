import java.util.Scanner;

public class Main {
    public static void main(String[] args)
    {
        Scanner s = new Scanner(System.in);

        String answer = "";

        String[] fileName = new String[50];
        int numberOfFiles = s.nextInt();
        for (int i = 0; i < numberOfFiles; i++)
        {
            fileName[i] = s.next();
        }

        int fileNameLength = fileName[0].length();
        boolean hasSameLetter;
        char letter;
        for(int i = 0; i < fileNameLength; i++)
        {
            hasSameLetter = true;
            letter = fileName[0].charAt(i);
            for (int j = 1; j < numberOfFiles; j++)
            {
                if (fileName[j].charAt(i) != letter)
                {
                    hasSameLetter = false;
                    break;
                }
            }
            answer += hasSameLetter? letter : "?";
        }

        System.out.println(answer);

        s.close();
    }
}
