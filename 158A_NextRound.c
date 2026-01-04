#include <stdio.h>

int main() {
    int n, k, i;
    scanf("%d %d", &n, &k);
    int scores[55]; // Max n is 50
    for (i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }
    
    int advanced = 0;
    int k_score = scores[k-1]; // k is 1-indexed

    for (i = 0; i < n; i++) {
        if (scores[i] >= k_score && scores[i] > 0) {
            advanced++;
        }
    }
    
    printf("%d\n", advanced);
    return 0;
}
