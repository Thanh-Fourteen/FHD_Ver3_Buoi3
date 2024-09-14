#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);
        
        int p[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &p[i]);
        }
        
        int swaps = 0;
        for (int i = 0; i < k; i++) {
            if (p[i] > k) {
                swaps++;
            }
        }
        
        printf("%d\n", swaps);
    }
    
    return 0;
}
