#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[])
{
  // 각 알파벳의 빈도를 저장할 배열을 초기화한다.
  char alpha[26];
  memset(alpha, 0, sizeof(alpha));

  // 입력
  char str[101];
  scanf("%s", str);

  // 문자열의 처음부터 끝까지 훑으며 개수를 센다.
  int len = strlen(str);
  for (int i = 0; i < len; i++)
    alpha[str[i] - 'a'] += 1;

  // 출력
  for (int i = 0; i < 26; i++)
    printf("%d ", alpha[i]);
  printf("\n");

  return 0;
}
