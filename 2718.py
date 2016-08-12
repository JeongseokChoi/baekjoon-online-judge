n_case = None
n = None
cache = None
# cache[n][t]: n번 째 칸을 채우는데, 그 칸의 상태가 t인 경우
# cache[x][0] = ----
# cache[x][1] = --**
# cache[x][2] = -**-
# cache[x][3] = *--*
# cache[x][4] = **--
# 나머지 경우는 불가능


def cover(n, t):  # n칸의 타일을 채워야하며, 지금 채울 타일의 상태는 t이다.
    global cache
    if n < 0:  # n칸 다 채웠는데, 더 채우라고 하는 경우는 채울 수 없는 경우
        return 0
    if n == 0:
        if t == 0:  # n칸 다 채웠을 때, 깔끔하게 채워지는 경우
            return 1
        else:
            return 0
    ret = cache[n][t]
    if not ret:
        ret = 0
        if t == 0:
            ret += cover(n - 1, 0)
            ret += cover(n - 2, 0)
            ret += cover(n - 1, 1)
            ret += cover(n - 1, 3)
            ret += cover(n - 1, 4)
        elif t == 1:
            ret += cover(n - 1, 0)
            ret += cover(n - 1, 4)
        elif t == 2:
            ret += cover(n - 1, 3)
        elif t == 3:
            ret += cover(n - 1, 0)
            ret += cover(n - 1, 2)
        elif t == 4:
            ret += cover(n - 1, 0)
            ret += cover(n - 1, 1)
        else:
            pass
        cache[n][t] = ret
    return ret


def main():
    global n_case, n, cache
    n_case = int(input())
    for _ in range(n_case):
        n = int(input())
        cache = [[None, None, None, None, None] for _ in range(n + 1)]
        print(cover(n, 0))


if __name__ == '__main__':
    main()
