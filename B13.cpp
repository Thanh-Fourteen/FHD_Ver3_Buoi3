//3.13
#include <stdio.h>

int main(){
	int q; scanf("%d", &q);
	
	while(q--){
		int n, m;
		scanf("%d%d", &n, &m);
		int first, second, flag = 1;
		scanf("%d", &first);
		for (int i = 2; i <= n; ++i){
			scanf("%d", &second);
			
			if (first > second) m += first - second;
			else m -= second - first;
			first = second;
			
			if (m < 0) flag = 0;
		}
		
		if(flag) printf("YES\n");
		else printf("NO\n");
	}
}
