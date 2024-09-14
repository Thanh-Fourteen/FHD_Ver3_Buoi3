//// c1
//#include <stdio.h>
//
//int main() {
//    int q;
//    scanf("%d", &q); // Nh?p s? lu?ng truy v?n
//
//    while (q--) {
//        int a;
//        scanf("%d", &a); // Nh?p trang sách Bình dang d?c d?n
//
//        int sum = 0;
//        for (int i = 1; i <= a; i++) {
//            int temp = i;
//            while (temp > 0) {
//                sum++;
//                temp /= 10;
//            }
//        }
//        printf("%d\n", sum);
//    }
//
//    return 0;
//}


// c2
#include <stdio.h>

int main() {
    int q;
    scanf("%d", &q); // Nh?p s? lu?ng truy v?

    while (q--) {
        int a;
        scanf("%d", &a); 

        int sum = 0;				
        int count = 1; 					
        int base = 10; 				

        while (a >= base) {
            sum += count * (base - base / 10);
            count++;
            base *= 10;
        }
        sum += count * (a - base / 10 + 1);

        printf("%d\n", sum);
    }

    return 0;
}


