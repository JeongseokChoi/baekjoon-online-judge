back_stack = []
forward_stack = []

n_case = int(input())

for case in range(n_case):
    back_stack.clear()
    forward_stack.clear()

    key_log = list(input())
    for key in key_log:
        if key == "<":
            try:
                forward_stack.append(back_stack.pop())
            except:
                pass
        elif key == ">":
            try:
                back_stack.append(forward_stack.pop())
            except:
                pass
        elif key == "-":
            try:
                back_stack.pop()
            except:
                pass
        else:
            back_stack.append(key)

    while len(forward_stack) > 0:
        back_stack.append(forward_stack.pop())

    for key in back_stack:
        print(key, end="")
    print("")
