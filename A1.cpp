#include <stdio.h>
#include <stdbool.h>

int slove(){
	int n, check[26] = {0};
	scanf("%d", &n);
	char s[n+1];
	scanf("%s", &s);

	if(n < 26) return false;
	for(int i = 0; i < n; ++i){
		++check[s[i] - 'a'];
	}
	
	for(int i = 0; i < 26; ++i){
		if(!check[i]) return false;
	}
	return true;
}

int main() {
    int q;
    scanf("%d", &q);
    while(q--){
    	if(slove()) printf("YES\n");
    	else printf("NO\n");
	}
}

