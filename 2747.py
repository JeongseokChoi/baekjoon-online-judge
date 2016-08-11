def fibo(n):
    now = 0
    next = 1
    for i in range(0, n):
        tmp = now + next
        now = next
        next = tmp
    return now

if __name__ == "__main__":
    num = int(input())
    print(fibo(num))
