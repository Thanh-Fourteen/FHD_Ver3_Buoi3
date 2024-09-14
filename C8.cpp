#include <stdio.h>

int main() {
	int t, a, x;
	scanf("%d", &t);

	while (t--) {
		scanf("%d %d", &a, &x);
		
		// x le: (3)
			// n chan (8) => le le (3 + 5)
			// n le   (7) => le le le (3 3 1)
		// x chan: (4)
			// n chan (8) => chan chan (4 4)
			// n le   (9) => NO
		if (x % 2 != 0)
			printf("YES\n");
		else if (a % 2 == 0)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}


