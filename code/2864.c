#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
  char num[2][8];
  scanf("%s %s", num[0], num[1]);

  char all_five[2][8], all_six[2][8];
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 8; j++)
    {
      if (num[i][j] == '6')
        all_five[i][j] = '5';
      else
        all_five[i][j] = num[i][j];

      if (num[i][j] == '5')
        all_six[i][j] = '6';
      else
        all_six[i][j] = num[i][j];
    }
  }

  printf(
    "%d %d\n",
    atoi(all_five[0]) + atoi(all_five[1]),
    atoi(all_six[0]) + atoi(all_six[1]));

  return 0;
}
