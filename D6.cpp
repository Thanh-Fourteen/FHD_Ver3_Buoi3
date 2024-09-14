#include<stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	while(T--) {
		long long X,Y;
		scanf("%lld%lld",&X,&Y);
		while(X != 0) {
			if(X > Y){
				int temp = X;
				X = Y;
				Y = temp;
			} else {
				int temp = X;
				X = Y - X;
				Y = temp;
			}
		}
		printf("%lld\n",Y);
	}
}
