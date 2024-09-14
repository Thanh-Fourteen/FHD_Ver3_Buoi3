#include <stdio.h>

int main() {
	int q;
	scanf("%d", &q);
	
	while(q--) {
		int n,x,k;
		scanf("%d%d%d",&n, &x, &k);
		int a = k / x;
		if(a > n) a = n;
		printf("%d\n",a);
	}
	return 0;

}
