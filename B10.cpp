#include <stdio.h>

int main() {
    int q;
    scanf("%d", &q);

    while (q--) {
        char c;
        scanf(" %c", &c);

        if (c == 'l' || c == 'a' || c == 'p' || c == 't' || c == 'r' || c == 'i' || c == 'n' || c == 'h' || c == '2' || c == '4') {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}

