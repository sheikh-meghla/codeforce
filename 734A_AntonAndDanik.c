#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  char s[100001];
  scanf("%s", s);
  int anton = 0, danik = 0;

  for (int i = 0; s[i]; i++) {
    if (s[i] == 'A') {
      anton++;
    } else {
      danik++;
    }
  }

  if (anton > danik) {
    printf("Anton\n");
  } else if (danik > anton) {
    printf("Danik\n");
  } else {
    printf("Friendship\n");
  }
  return 0;
}
