#include <stdio.h>
#include <ctype.h>


int main(int argc, char *argv[])
{
  char str[101];
  scanf("%s", str);

  char before = '-';
  int idx = 0;
  while (str[idx] != '\0')
  {
    if (before == '-')
      printf("%c", (char)toupper(str[idx]));
    before = str[idx++];
  }
  printf("\n");

  return 0;
}
