if __name__ == '__main__':
    cache = []
    cache.append(None)
    cache.append(1)
    cache.append(3)
    n = int(input())
    for i in range(3, n + 1):
        cache.append(2 * cache[i - 2] + cache[i - 1])
    print(cache[n] % 10007)
