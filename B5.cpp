#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		int n;
		scanf("%d",&n);
		int res=n / 2 + 1;
		printf("%d\n",res);
	}
	return 0;
}
