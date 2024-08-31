#include <stdio.h>
#include <math.h>

int is_prime(long long n) {
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            return 0;
        }
    }
    return n > 1;
}

int isPerfectSquare(long long n) {
    long long x = sqrt(n);
    return x * x == n;
}

//int is_fibonacci(long long n) {
//    // n la fibo khi va chi khi 5 * n^2 + 4 hoac 5 * n^2 - 4 la so chinh phuong
//    return isPerfectSquare(5 * n * n + 4) || isPerfectSquare(5 * n * n - 4);
//}

int is_fibonacci(long long n) {
    long long a = 0, b = 1;
    while (b < n) {
        int temp = b;
        b += a;
        a = temp;
    }
    return b == n;
}


int main() {
    long long n;
    scanf("%lld", &n);

    if (is_fibonacci(n) && is_prime(n)) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}

