#include <stdio.h>

int isPrime(int n){
	if (n < 2) return 0;
	for (int i = 2; i * i <= n; ++i){
		if (n % i == 0)
			return 0;
	}
	return 1;
}

int main(){
	int n; scanf("%d", &n);
	for(int i = 1; i + 2 < n; ++i){
		if (isPrime(i) && isPrime(i + 2))
			printf("%d %d\n", i, i + 2);
	}
}
