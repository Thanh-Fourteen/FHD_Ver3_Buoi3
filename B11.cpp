#include <stdio.h>
#include <math.h>

int main() {
    int q; scanf("%d", &q);
    while(q--){
		int n; scanf("%d", &n);	
	    double max_distance = 0;
	    
	    while(n--) {
	        int x, y;
	        scanf("%d%d", &x, &y);
	        double d = sqrt(x * x + y * y);
	        if (d > max_distance) {
	            max_distance = d;
	        }
	    }
	
	    printf("%.0f\n", ceil(max_distance));
	}

    return 0;
}

