#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


typedef struct Tower
{
  int idx;
  int height;
} Tower;


int main()
{
  int nTower;
  vector<int> towerVec;
  vector<Tower> stack;
  vector<int> result;
  int height;

  cin >> nTower;
  for (int iTower = 0; iTower < nTower; iTower++)
  {
    cin >> height;
    towerVec.push_back(height);
  }
  result.assign(nTower, 0);
  for (int i = 0; i < nTower; i++)
  {
    int height = towerVec[i];
    if (!stack.empty())
    {
      if (height < stack.back().height)
      {
        result[i] = stack.back().idx;
      }
      else
      {
        while (stack.size() > 0 && stack.back().height < height)
          stack.pop_back();
        if (stack.size() > 0)
          result[i] = stack.back().idx;
      }
    }
    Tower tmp = {i + 1, height};
    stack.push_back(tmp);
  }
  for (int i = 0; i < result.size(); i++)
    cout << result[i] << " ";
  cout << endl;

  return 0;
}
