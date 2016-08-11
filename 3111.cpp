#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


#define MAX_PATTERN_LEN 25
#define MAX_TEXT_LEN 300000


char pattern[MAX_PATTERN_LEN + 1];
char text[MAX_TEXT_LEN + 1];
char result[MAX_TEXT_LEN + 1];
int pLen, tLen;  // pLen: length of pattern, tLen: length of text
int lIdx, rIdx;  // lIdx: index from left side, rIdx: index from right side
vector<char> leftVec;
vector<char> rightVec;


bool matchLeft()
{
  int pMatchedCnt = 0;
  while (lIdx <= rIdx)
  {
    if (pMatchedCnt == pLen)
    {
      lIdx += pLen;
      break;
    }
    else if (lIdx + pMatchedCnt <= rIdx
        && text[lIdx + pMatchedCnt] == pattern[pMatchedCnt])
    {
      pMatchedCnt++;
    }
    else if (pMatchedCnt != 0)
    {
      for (int i = 0; i < pMatchedCnt; i++)
        leftVec.push_back(text[lIdx + i]);
      lIdx += pMatchedCnt;
      pMatchedCnt = 0;
    }
    else
    {
      leftVec.push_back(text[lIdx++]);
    }
  }
  return (pMatchedCnt == pLen);
}

bool matchRight()
{
  int pMatchedCnt = 0;
  while (rIdx >= lIdx)
  {
    if (pMatchedCnt == pLen)
    {
      rIdx -= pLen;
      break;
    }
    else if (rIdx - pMatchedCnt >= lIdx
        && text[rIdx - pMatchedCnt] == pattern[(pLen - 1) - pMatchedCnt])
    {
      pMatchedCnt++;
    }
    else if (pMatchedCnt != 0)
    {
      for (int i = 0; i < pMatchedCnt; i++)
        rightVec.push_back(text[rIdx - i]);
      rIdx -= pMatchedCnt;
      pMatchedCnt = 0;
    }
    else
    {
      rightVec.push_back(text[rIdx--]);
    }
  }
  return (pMatchedCnt == pLen);
}


int main()
{
  scanf("%s%s", pattern, text);
  pLen = strlen(pattern);
  tLen = strlen(text);
  lIdx = 0;
  rIdx = tLen - 1;
  while (true)
  {
    if (matchLeft() == false) break;
    if (matchRight() == false) break;
  }

  int idx = 0;
  for (int i = 0; i < leftVec.size(); i++)
    result[idx++] = leftVec[i];
    //cout << leftVec[i];
  for (int i = rightVec.size() - 1; i >= 0; i--)
    result[idx++] = rightVec[i];
    //cout << rightVec[i];
  idx = 0;
  while (result[idx])
    putchar(result[idx++]);
  putchar('\n');

  return 0;
}
