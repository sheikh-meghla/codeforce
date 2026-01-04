#include <stdio.h>

int main() {
  int n, t;
  scanf("%d %d", &n, &t);
  char s[51];
  scanf("%s", s);

  while (t--) {
    for (int i = 0; i < n - 1; i++) {
      if (s[i] == 'B' && s[i + 1] == 'G') {
        s[i] = 'G';
        s[i + 1] = 'B';
        i++; // Skip next position since we just swapped into it
      }
    }
  }

  printf("%s\n", s);
  return 0;
}
