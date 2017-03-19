if __name__ == '__main__':
    n = int(input())
    cache = [[None, None] for _ in range(n + 1)]
    cache[1] = [0, 1]
    for i in range(2, n + 1):
        cache[i][0] = cache[i - 1][0] + cache[i - 1][1]
        cache[i][1] = cache[i - 1][0]
    print(cache[n][0] + cache[n][1])
