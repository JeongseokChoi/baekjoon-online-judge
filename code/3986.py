def is_nice(w):
    stack = []
    for x in w:
        if stack and x == stack[-1]:
            stack.pop()
        else:
            stack.append(x)
    if stack:
        return False
    else:
        return True


def main():
    cnt = 0
    n_case = int(input())
    for _ in range(n_case):
        word = input()
        if is_nice(word):
            cnt += 1
    print(cnt)


if __name__ == '__main__':
    main()
