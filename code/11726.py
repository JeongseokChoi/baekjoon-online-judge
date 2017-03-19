cache = [None for _ in range(1001)]


def tiling(n):
    global cache
    if n <= 2:
        return n
    if not cache[n]:
        cache[n] = tiling(n - 2) + tiling(n - 1)
    return cache[n]


if __name__ == '__main__':
    print(tiling(int(input())) % 10007)
