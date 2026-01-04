#include <stdio.h>

int main() {
    int n, x = 0;
    char s[4];
    scanf("%d", &n);
    while (n--) {
        scanf("%s", s);
        if (s[1] == '+') {
            x++;
        } else {
            x--;
        }
    }
    printf("%d\n", x);
    return 0;
}
