#include <stdio.h>
#include <math.h>

int main() {
    int n, m, a;
    scanf("%d%d%d", &n, &m, &a);

    int squares_in_row = ceil(1.0 * n / a);
    int squares_in_col = ceil(1.0 * m / a);

    int total_squares = squares_in_row * squares_in_col;

    printf("%d\n", total_squares);

    return 0;
}

