"""sweeping을 이용하여 풀 수 있다.
왼쪽 막대부터 오른쪽으로 하나씩 진행하면서 stack에 push하되,
자신보다 큰 막대가 stack의 top에 존재할 경우
자신보다 작은 막대가 stack의 top에 올 때까지 하나씩 pop하며 넓이를 계산해나간다.
"""

stack = []

while True:
    bar_height = [int(x) for x in input().split()]
    end_pos = bar_height.pop(0)
    if end_pos == 0:
        break;

    bar = [(x, bar_height[x]) for x in range(len(bar_height))]
    max_area = 0

    stack.append(bar.pop(0))
    while len(bar) > 0:
        curr = bar.pop(0)
        if len(stack) > 0 and curr[1] >= stack[-1][1]:
            stack.append(curr)
        else:
            while len(stack) > 0 and curr[1] < stack[-1][1]:
                height = stack.pop()[1]
                if len(stack) == 0:
                    start_pos = 0
                else:
                    start_pos = stack[-1][0] + 1
                area = (curr[0] - start_pos) * height
                if area > max_area:
                    max_area = area
            stack.append(curr)

    while len(stack) > 0:
        height = stack.pop()[1]
        if len(stack) == 0:
            area = end_pos * height
        else:
            start_pos = stack[-1][0] + 1
            area = (end_pos - start_pos) * height
        if area > max_area:
            max_area = area

    print(max_area)
