#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <queue>
using namespace std;


struct cell_t
{
  int row, col;
  int level;
  bool is_visited;
} maze[100][100];


int solve(cell_t (*maze)[100], int row, int col)
{
  queue<struct cell_t> opening_queue;

  opening_queue.push(maze[0][0]);
  while (!opening_queue.empty())
  {
    struct cell_t curr = opening_queue.front();
    opening_queue.pop();
    if (curr.is_visited == false)
    {
      if (curr.row == row - 1 && curr.col == col - 1)
        return curr.level;

      maze[curr.row][curr.col].is_visited = true;

      // '오른쪽'부터 시계방향
      int direction[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
      int next_row, next_col;
      for (int i = 0; i < 4; i++)
      {
        next_row = curr.row + direction[i][0];
        next_col = curr.col + direction[i][1];
        if ((next_row >= 0 && next_row < row)
            && (next_col >= 0 && next_col < col)
            && (maze[next_row][next_col].is_visited == false))
        {
          maze[next_row][next_col].level = curr.level + 1;
          opening_queue.push(maze[next_row][next_col]);
        }
      }
    }
  }
}


int main()
{
  int n, m;
  cin >> n >> m;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      maze[i][j].row = i;
      maze[i][j].col = j;
      maze[i][j].level = 1;
      char tmp;
      cin >> tmp;
      maze[i][j].is_visited = (tmp == '0')? true : false;
    }
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cout << !maze[i][j].is_visited << " ";
    }
    cout << endl;
  }

  cout << solve(maze, n, m) << endl;

  return 0;
}
