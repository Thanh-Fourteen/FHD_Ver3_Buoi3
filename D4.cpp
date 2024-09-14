# include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);

	while (t--) {
		int n,cur = 0;
		scanf("%d", &n);
		for (int i=1; i<=n; ++i) {
			int a;
			scanf("%d",&a);
			cur++;
			if (cur == a) {
				cur++;
			}
		}
		printf("%d\n", cur);
	}
}
