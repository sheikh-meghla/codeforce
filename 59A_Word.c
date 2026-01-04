#include <ctype.h>
#include <stdio.h>
#include <string.h>


int main() {
  char s[101];
  scanf("%s", s);
  int upper = 0, lower = 0;

  for (int i = 0; s[i]; i++) {
    if (isupper(s[i])) {
      upper++;
    } else {
      lower++;
    }
  }

  for (int i = 0; s[i]; i++) {
    if (upper > lower) {
      printf("%c", toupper(s[i]));
    } else {
      printf("%c", tolower(s[i]));
    }
  }
  printf("\n");
  return 0;
}
