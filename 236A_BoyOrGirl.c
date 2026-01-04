#include <stdio.h>
#include <string.h>

int main() {
  char s[101];
  scanf("%s", s);
  int count = 0;
  int seen[26] = {0};

  for (int i = 0; s[i]; i++) {
    if (!seen[s[i] - 'a']) {
      seen[s[i] - 'a'] = 1;
      count++;
    }
  }

  if (count % 2 == 0) {
    printf("CHAT WITH HER!\n");
  } else {
    printf("IGNORE HIM!\n");
  }
  return 0;
}
