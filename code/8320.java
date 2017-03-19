import java.util.Scanner;


class Main
{
    public static void main(String[] args)
    {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        s.close();

        int cnt = 0;
        for (int i = 1; i <=n; i++)
            cnt += func(i);

        System.out.println(cnt);
    }

    // x개의 정사각형으로 만들 수 있는 직사각형의 수를 반환한다.
    public static int func(int x)
    {
        int cnt = 0;

        for (int i = 1; i <= x; i++)
            if (x % i == 0)
                cnt += 1;

        if (cnt % 2 == 1)
            cnt += 1;

        return cnt / 2;
    }
}
