#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;


typedef struct
{
  int row, col;
  bool is_visited;
} cell_t;


int solve(cell_t* maze[100], int n, int m)
{
  
}


int main()
{
  cell_t maze[100][100];
  int n, m;
  cin >> n >> m;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      maze[i][j].row = i;
      maze[i][j].col = j;
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

  return 0;
}
