#include <stdio.h>

int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return 0;
    }
    return 1; 
}

int main() {
    int q;
    scanf("%d", &q); 

    while (q--) {
        int a;
        scanf("%d", &a);
		
		int found = 0;
		
        for (int i = 2; i <= a; ++i) {
            if (isPrime(i) && isPrime(a + i)) { 
                found = 1; 
                break; 
            }
        }

        if (found) {
            printf("YES\n"); 
        } else {
            printf("NO\n"); 
        }
    }

    return 0;
}

