import java.util.Stack;
import java.util.Scanner;


class Bar
{
    public int position;
    public int height;

    public Bar(int position, int height)
    {
        this.position = position;
        this.height = height;
    }
}


public class Main
{
    public static Scanner s;
    public static int[] heightArr;
    public static Bar[] barArr;
    public static Stack<Bar> stack;
    public static int maxArea;  // 히스토그램에서 그려지는 직사각형의 최대 면적

    public static void main(String[] args)
    {
        // 입력
        s = new Scanner(System.in);
        int nBar = s.nextInt();
        heightArr = new int[nBar];
        for (int i = 0; i < nBar; i++)
            heightArr[i] = s.nextInt();
        s.close();

        // 문제를 풀기위한 초기화
        // 1. (position, height)의 쌍으로 저장
        // 2. 스택 할당
        // 3. 면적의 최대값 초기화
        barArr = new Bar[nBar];
        for (int i = 0; i < nBar; i++)
            barArr[i] = new Bar(i, heightArr[i]);
        stack = new Stack<Bar>();
        maxArea = 0;

        // 막대를 하나씩 스택에 넣는다.
        // 단, 넣을 막대가 항상 스택에서 가장 높이가 높은(크거나 같은) 막대이다.
        // 만약 스택에(정확히는 top에) 넣을 막대보다 높이가 큰 막대가 존재할 경우
        // 그 막대로부터 만들 수 있는 최대 직사각형의 넓이를 계산하고
        // 스택에서 제거한 다음에 넣는다.
        for (int i = 0; i < nBar; i++)
        {
            Bar currBar = barArr[i];
            int currPos = barArr[i].position;
            int currHeight = barArr[i].height;

            while (!stack.isEmpty() && stack.peek().height > currHeight)
            {
                Bar tmpBar = stack.peek();
                stack.pop();

                int width, height, area;
                width = stack.isEmpty()? currPos : currPos - (stack.peek().position + 1);
                height = tmpBar.height;
                area = width * height;
                if (area > maxArea)
                    maxArea = area;
            }

            stack.push(currBar);
        }
        while (!stack.isEmpty())
        {
            Bar tmpBar = stack.peek();
            stack.pop();

            int width, height, area;
            width = stack.isEmpty()? nBar : nBar - (stack.peek().position + 1);
            height = tmpBar.height;
            area = width * height;
            if (area > maxArea)
                maxArea = area;
        }

        // 출력
        System.out.println(maxArea);
    }
}
