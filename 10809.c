#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
  char first_occur[26];
  for (int i = 0; i < 26; i++)
    first_occur[i] = -1;

  char str[101];
  scanf("%s", str);
  int idx = strlen(str);
  while (str[--idx])
    first_occur[str[idx] - 'a'] = idx;

  for (int i = 0; i < 26; i++)
    printf("%d ", first_occur[i]);
  printf("\n");

  return 0;
}
