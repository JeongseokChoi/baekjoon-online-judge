#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <queue>
using namespace std;


int maze[100][100];
bool visited[100][100];
int direction[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};


int main()
{
  int n, m;
  cin >> n >> m;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      char ch;
      cin >> ch;
      maze[i][j] = (ch == '1')? 1 : 0;
    }
  }

  queue< pair<int, int> > q;
  q.push({0, 0});
  visited[0][0] = true;
  while (q.empty() == false)
  {
    pair<int, int> curr = q.front();
    q.pop();

    for (int i = 0; i < 4; i++)
    {
      int next_row = curr.first + direction[i][0];
      int next_col = curr.second + direction[i][1];
      if ((next_row >= 0 && next_row < n) && (next_col >= 0 && next_col < m)
          && maze[next_row][next_col] != 0)
      {
        if (visited[next_row][next_col] == false)
        {
          q.push({next_row, next_col});
          visited[next_row][next_col] = true;
          maze[next_row][next_col] = maze[curr.first][curr.second] + 1;
        }
      }
    }
  }

  cout << maze[n - 1][m - 1] << endl;

  return 0;
}
