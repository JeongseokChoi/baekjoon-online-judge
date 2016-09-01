#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;


const int INF = 987654321;
const int MAX_USER = 100;
bool graph[MAX_USER + 1][MAX_USER + 1];
bool visited[MAX_USER + 1];
int dist[MAX_USER + 1];
int kevin_bacon[MAX_USER + 1];
int n;


int get_kevin_bacon(int vertex_id)
{
  memset(visited, 0, (MAX_USER + 1) * sizeof(bool));
  memset(dist, 0, (MAX_USER + 1) * sizeof(int));

  // Breath First Search
  queue<int> q;
  q.push(vertex_id);
  while (q.empty() == false)
  {
    int curr = q.front();
    q.pop();

    visited[curr] = true;
    for (int j = 1; j <= n; j++)
    {
      if (j == curr) continue;

      if (graph[curr][j] == true && visited[j] == false)
      {
        q.push(j);
        visited[j] = true;
        dist[j] = dist[curr] + 1;
      }
    }
  }

  int kevin_bacon_value = 0;
  for (int i = 1; i <= n; i++)
  {
    kevin_bacon_value += dist[i];
  }

  //cout << "from vertex[" << vertex_id << "] : " << kevin_bacon_value << endl;

  return kevin_bacon_value;
}


int main()
{
  int m;
  cin >> n >> m;  // n: 정점의 수(전역변수), m: 간선의 수(지역변수)
  for (int i = 0; i < m; i++)
  {
    int from, to;
    cin >> from >> to;
    graph[from][to] = true;
    graph[to][from] = true;
  }

  for (int i = 1; i <= n; i++)
    kevin_bacon[i] = get_kevin_bacon(i);
  /*
  for (int i = 1; i <= n; i++)
    cout << kevin_bacon[i] << " ";
  cout << endl;
  */
  int min_idx = 1;
  for (int i = 2; i <= n; i++)
  {
    if (kevin_bacon[i] < kevin_bacon[min_idx])
    {
      min_idx = i;
    }
  }
  cout << min_idx << endl;

  return 0;
}
