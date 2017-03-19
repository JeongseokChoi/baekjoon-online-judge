stack = []

n_case = int(input())

for case in range(n_case):

    operation = input().split()

    # push 명령의 경우, 뒤따라오는 정수값을 stack에 넣는다.
    if operation[0] == "push":
        stack.append(operation[1])
    # pop 명령의 경우, stack의 top에 존재하는 정수값을 출력하고 그 값을 제거한다.
    # stack이 비어있을 경우 -1을 출력한다.
    elif operation[0] == "pop":
        if len(stack) > 0:
            print(stack[-1])
            stack.pop()
        else:
            print(-1)
    # size 명령의 경우, 스택에 들어있는 정수의 개수를 출력한다.
    elif operation[0] == "size":
        print(len(stack))
    # empty 명령의 경우, 스택이 비어있으면 1, 아니면 0을 출력한다.
    elif operation[0] == "empty":
        if len(stack) == 0:
            print(1)
        else:
            print(0)
    # top 명령의 경우, 스택의 가장 위에 있는 정수를 출력한다.
    # 스택이 비어있을 경우 -1을 출력한다.
    elif operation[0] == "top":
        if len(stack) > 0:
            print(stack[-1])
        else:
            print(-1)
    # 문제에서 주어질 수 없는 경우이다. (예외처리를 위한 코드)
    else:
        print("error")
