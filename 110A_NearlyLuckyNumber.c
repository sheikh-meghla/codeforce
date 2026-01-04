#include <stdio.h>
#include <string.h>

int main() {
  char s[20]; // n can be up to 10^18, so 19 digits.
  // Wait, n is given as number, let's read as string to capture digits easily.
  // Oh, wait, 10^18 fits in long long.
  long long n;
  scanf("%lld", &n);
  int lucky_digits = 0;

  // We can read as char array to be safe about length, but long long is fine.
  // Actually reading as string is easier for loop.
  // Let's re-read as string since I can't seek back.
  // Actually, I can just mod 10 loop.

  while (n > 0) {
    int digit = n % 10;
    if (digit == 4 || digit == 7) {
      lucky_digits++;
    }
    n /= 10;
  }

  if (lucky_digits == 4 || lucky_digits == 7) {
    printf("YES\n");
  } else {
    printf("NO\n");
  }
  return 0;
}
