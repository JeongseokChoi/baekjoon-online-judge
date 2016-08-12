def main():
    l = input().split()
    d = ['1', '2', '3', '4', '5', '6', '7', '8']
    if l == d:
        print("ascending")
        return None
    d.reverse()
    if l == d:
        print("descending")
        return None
    print("mixed")

if __name__ == '__main__':
    main()
