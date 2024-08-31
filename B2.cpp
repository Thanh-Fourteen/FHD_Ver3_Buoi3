#include <stdio.h>

int main() {
    int q;
    scanf("%d", &q);

    while (q--) {
        int a;
        scanf("%d", &a);

        // Divide by 2 until odd or equals 2
        while (a > 2 && a % 2 == 0)
            a /= 2;
		
		int flag = 0;
		for (int i = 2;i < a; ++i)
			if (a % i == 0){
				flag = 1;
				break;
			}
						
        if (flag == 0 && a > 1)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}

