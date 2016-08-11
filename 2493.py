def main():
    result = None
    tower_height = []
    tower = None
    n_tower = int(input())
    tower_height = input().split()
    tower = [(idx + 1, int(tower_height[idx])) for idx in range(0, n_tower)]
    result = [0 for _ in range(n_tower + 1)]
    stack = []
    for t in tower:
        if not stack:
            pass
        elif t[1] < stack[-1][1]:
            result[t[0]] = stack[-1][0]
        else:
            while stack and stack[-1][1] < t[1]:
                stack.pop()
            if stack:
                result[t[0]] = stack[-1][0]
        stack.append(t)
    for i in range(1, n_tower + 1):
        print('%d ' % result[i], end='')
    print('')


if __name__ == '__main__':
    main()
