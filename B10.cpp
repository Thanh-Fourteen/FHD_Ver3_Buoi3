#include <stdio.h>
#include <math.h>

int KT(int D, char S[]) {
	int dihoc = 0;
	for (int i = 0; i < D; ++i) {
		if (S[i] == 'P')
			dihoc++;
	}

	int so_ngay_can_di = (int)ceil(0.75 * D);

	if (dihoc >= so_ngay_can_di)
		return 0;

	int can_diem_danh = so_ngay_can_di - dihoc;
	int count = 0;

	for (int i = 2; i < D - 2; ++i) {
		if (S[i] == 'A') {
			if ((S[i - 1] == 'P' || S[i - 2] == 'P') &&
			        (S[i + 1] == 'P' || S[i + 2] == 'P')) {
				count++;
			}
		}
	}

	if (count >= can_diem_danh)
		return can_diem_danh;
	else
		return -1;
}
int main() {
	int t;
	scanf("%d", &t);

	while (t--) {
		int D;
		scanf("%d", &D);
		char S[D + 1];
		scanf("%s", S);

		printf("%d\n", KT(D, S));
	}
}










//#include <stdio.h>
//#include <math.h>
//
//int main() {
//	int t;
//	scanf("%d", &t);
//	while(t--) {
//		int n, A = 0;
//		scanf("%d", &n);
//		char c;
//		scanf("%c", &c);
//
//		int lien_tuc_A = 0, khong_the_ddh = 0;
//		for(int i = 1; i <= n; ++i) {
//			scanf("%c", &c);
//			if(c == 'A') {
//				++A;
//				++lien_tuc_A;
//				if (lien_tuc_A >= 5 || i <= 2 || i >= (n-1))
//					++khong_the_ddh;
//			} else {
//				lien_tuc_A = 0;
//			}
//		}
//
//		int sl_nghi_toi_da = 0.25 * n;
//		int sl_can_ddh = A - sl_nghi_toi_da;
//		if (sl_can_ddh < 0) sl_can_ddh = 0;
//		
//		if(khong_the_ddh <= sl_can_ddh && khong_the_ddh <= sl_nghi_toi_da)
//			printf("%d\n", sl_can_ddh);
//		else
//			printf("-1\n");
//	}
//}
//
//
