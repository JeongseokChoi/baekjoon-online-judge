tile = None


def main():
    global tile
    n_case = int(input())
    for _ in range(n_case):
        tile_height = int(input())
        tile = [[0, 0, 0, 0] * tile_height]
        


if __name__ == '__main__':
    main()
