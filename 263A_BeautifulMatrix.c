#include <stdio.h>
#include <stdlib.h>

int main() {
  int val, row, col;
  for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= 5; j++) {
      scanf("%d", &val);
      if (val == 1) {
        row = i;
        col = j;
      }
    }
  }

  printf("%d\n", abs(row - 3) + abs(col - 3));
  return 0;
}
