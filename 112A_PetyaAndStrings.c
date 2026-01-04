#include <ctype.h>
#include <stdio.h>
#include <string.h>


int main() {
  char s1[101], s2[101];
  scanf("%s", s1);
  scanf("%s", s2);

  int result = 0;
  for (int i = 0; s1[i]; i++) {
    char c1 = tolower(s1[i]);
    char c2 = tolower(s2[i]);
    if (c1 < c2) {
      result = -1;
      break;
    } else if (c1 > c2) {
      result = 1;
      break;
    }
  }

  printf("%d\n", result);
  return 0;
}
