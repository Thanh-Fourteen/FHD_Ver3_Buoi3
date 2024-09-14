#include <stdio.h>
#include <math.h>

int main() {
	int T;
	scanf("%d", &T);

	while (T--) {
		int N, X, Y;
		scanf("%d%d%d", &N, &X, &Y);

		int so_xe_buyt_can = N / 100;
		int so_nguoi_du = N % 100;

		int khi_thai = so_xe_buyt_can * X;
		if (so_nguoi_du > 0) {
			int so_xe_can = ceil(so_nguoi_du / 4.0);
			int khi_thai_oto = so_xe_can * Y;
			khi_thai += fmin(X, khi_thai_oto);
		}
		
		int full_oto = ceil(N / 4.0);
		int full_khi_thai_oto = full_oto * Y;
		khi_thai = fmin(khi_thai, full_khi_thai_oto);
		printf("%d\n", khi_thai);
	}

	return 0;
}

