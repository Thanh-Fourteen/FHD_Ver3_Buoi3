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

int main() {
    long long a, b, cnt = 0;
    scanf("%lld%lld", &a, &b);
    
	long long f1 = 1, f2 = 1;
	while (f2 < b){
		long long temp = f1 + f2;
		if (temp >= a && is_prime(temp))
			++cnt;
		f1 = f2;
		f2 = temp;
	}
	
	printf("%lld", cnt);
    return 0;
}

