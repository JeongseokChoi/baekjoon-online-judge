queue = []

n_case = int(input())

for case in range(n_case):

    op = input().split()  # op; operation

    if op[0] == "push":
        queue.append(op[1])
    elif op[0] == "pop":
        try:
            data = queue.pop(0)
            print(data)
        except:
            print(-1)
    elif op[0] == "size":
        print(len(queue))
    elif op[0] == "empty":
        if len(queue) == 0:
            print(1)
        else:
            print(0)
    elif op[0] == "front":
        try:
            print(queue[0])
        except:
            print(-1)
    elif op[0] == "back":
        try:
            print(queue[-1])
        except:
            print(-1)
    else:
        print("error")
