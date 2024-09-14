#include <stdio.h>

int main(){
    int n,k,q ;
    scanf("%d", &q);
    
    while(q--){
        scanf("%d%d", &n, &k);
        //k nguoi ban + ban = k + 1 nguoi
        printf("%d\n",n - k * (n / (k+1)));
    }
    return 0 ;
}
