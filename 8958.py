if __name__ == "__main__":
    num = int(input())
    for i in range(0, num):
        s = input()
        total = 0
        curr_point = 1
        for i in range(0, len(s)):
            if s[i] == "O":
                total += curr_point
                curr_point += 1
            else:
                curr_point = 1
        print(total)
