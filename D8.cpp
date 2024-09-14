//c1
//#include <stdio.h>
//
//int main() {
//    int N, M;
//    
//    // Nh?p N và M
//    scanf("%d %d", &N, &M);
//    
//    // X? lý t?ng truy v?n
//    for (int i = 0; i < M; i++) {
//        int q, count = 0;
//        scanf("%d", &q);
//        
//        // Tính s? l?n t?ng b?ng q
//        for (int a = 1; a <= N; a++) {
//            int b = q - a; // t?ng q = a + b => b = q - a
//            if (b > N && b <= 2 * N) {
//                count++;
//            }
//        }
//        
//        // In k?t qu? cho truy v?n hi?n t?i
//        printf("%d\n", count);
//    }
//    
//    return 0;
//}


//c2
#include <stdio.h>

void solve(int N, int M) {
	while (M--) {
		int q;
		scanf("%d", &q);
		/*
		1 <= a <= N && N + 1 <= b <= 2N
		=> min q: 1 + (N + 1) = N + 2
		=> max q: N + 2N = 3N
		*/
		if (q < N + 1 || q > 3 * N)
			printf("0\n");

		else {
			/*
			a trong tap A
			b trong tap B
			a + b = q
			=> q - a = b
			
			Ta co: N + 1 <= b <= 2N
			=> N + 1 = q - a = 2N
			=> q - 2N <= a <= q - N - 1
			*/
			int min_a = q - 2 * N;
			int max_a = q - N - 1;

			if (min_a < 1) min_a = 1;
			if (max_a > N) max_a = N;

			if (min_a > max_a)
				printf("0\n");
			else
				printf("%d\n", max_a - min_a + 1);
		}
	}
}

int main() {
	int N, M;
	scanf("%d%d", &N, &M);
	solve(N, M);
}






