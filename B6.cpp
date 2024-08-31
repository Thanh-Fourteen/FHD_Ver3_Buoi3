// c1
//#include <stdio.h>
//#include <math.h>
//
//int main() {
//    int q;
//    scanf("%d", &q);
//
//    while (q--) {
//        int n;
//        scanf("%d", &n);
//
//        int sum = 0;
//
//        for (int i = 1; i <= n; i++) {
//            sum += pow(-1, i) * i;
//        }
//
//        printf("%d\n", sum);
//    }
//
//    return 0;
//}


//c2
#include <stdio.h>
#include <math.h>

int main() {
    int q;
    scanf("%d", &q);

    while (q--) {
        int n;
        scanf("%d", &n);

        if (n % 2 == 0)
        	printf("%d\n", n/2);
        else
        	printf("%d\n", -(n+1)/2);
    }

    return 0;
}

