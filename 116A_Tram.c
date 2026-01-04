#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int current = 0;
  int max_capacity = 0;
  int a, b;

  while (n--) {
    scanf("%d %d", &a, &b);
    current -= a;
    current += b;
    if (current > max_capacity) {
      max_capacity = current;
    }
  }

  printf("%d\n", max_capacity);
  return 0;
}
