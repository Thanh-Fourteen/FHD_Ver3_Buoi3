#include <stdio.h>

int isPrime(int n){
	for(int i = 2; i * i <= n; ++i){
		if(n % i == 0) return 0; 
	} 
	return n > 1;
} 

int main(){
	int  n;
	scanf("%d", &n);
	
	for(int i = 2; i <= n / 2; ++i){
		if(isPrime(i) && isPrime(n - i)){
			printf("%d %d\n", i, n - i); 
		} 
	} 
	return 0; 
}
