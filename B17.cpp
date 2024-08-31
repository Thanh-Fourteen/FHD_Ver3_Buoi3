// c1
#include <stdio.h>
#include <math.h>

int main(){
	int n, cnt = 0;
	long long sum = 0; 
	scanf("%d", &n);
	
	int i = 0;
	while(cnt < n){
		++i;
		
		int sqr = sqrt(i);
		if (sqr == sqrt(i)){
			++cnt;
			sum += i;
		}
	}
	
	printf("%lld", sum);
}




// c2
#include <stdio.h>
#include <math.h>

int main(){
	int n; scanf("%d", &n);
	long long ans = 0;
	n += 1;
	while(--n) ans += n * n;
	printf("%lld", ans);	
}


// c3
#include <stdio.h>
#include <math.h>

int main(){
	int n; scanf("%d", &n);
	long long ans = 1ll * n * (n + 1) * (2*n + 1) / 6;
	printf("%lld", ans);	
}
