n_city = None
graph = None
INFINITY = 987654321


def tsp(graph, curr_pos, curr_distance):
    #
    # print(graph, end=" >> ")
    # print(curr_distance)
    #
    global n_city, INFINITY
    if graph == [[-1 for _ in range(n_city)] for _ in range(n_city)]:
        return curr_distance
    if graph[curr_pos] == [-1 for _ in range(n_city)]:
        return INFINITY
    ret = INFINITY
    for j in range(n_city):
        if j != curr_pos:
            new_distance = curr_distance + graph[curr_pos][j]
            tmp = graph[curr_pos]
            graph[curr_pos] = [-1 for _ in range(n_city)]
            ret = min(ret, tsp(graph, j, new_distance))
            graph[curr_pos] = tmp

    return ret


def main():
    global n_city, graph
    n_city = int(input())
    graph = [[INFINITY for _ in range(n_city)] for _ in range(n_city)]
    for i in range(n_city):
        graph[i] = [int(x) for x in input().split()]
    print(tsp(graph, 0, 0))


if __name__ == '__main__':
    main()
