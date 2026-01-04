#include <stdio.h>

int main() {
  long long k, n, w;
  scanf("%lld %lld %lld", &k, &n, &w);
  long long total_cost = k * (w * (w + 1) / 2);
  if (total_cost > n) {
    printf("%lld\n", total_cost - n);
  } else {
    printf("0\n");
  }
  return 0;
}
