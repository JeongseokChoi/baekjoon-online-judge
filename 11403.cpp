#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <queue>
using namespace std;


bool graph[100][100];
bool visited[100];
int n;
bool answer[100][100];


void bfs(int start_idx)
{
  memset(visited, 0, 100 * sizeof(bool));

  queue<int> q;
  q.push(start_idx);
  while (q.empty() == false)
  {
    int curr = q.front();
    q.pop();
    for (int i = 0; i < n; i++)
    {
      if (graph[curr][i] == true && visited[i] == false)
      {
        answer[start_idx][i] = true;
        visited[i] = true;
        q.push(i);
      }
    }
  }
}


int main()
{
  cin >> n;
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      cin >> graph[i][j];

  for (int i = 0; i < n; i++)
  {
    bfs(i);
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << answer[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
