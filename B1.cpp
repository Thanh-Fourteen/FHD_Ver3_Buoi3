#include <stdio.h>
#include <math.h>

int main() {
    int q;
    scanf("%d", &q);

    while (q--) {
        int a;
        scanf("%d", &a);
        a /= 2;

        if (a > 0 && sqrt(a) == (int)sqrt(a))
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}

