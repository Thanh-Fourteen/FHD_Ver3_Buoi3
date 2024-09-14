#include <stdio.h>
#include <math.h>

int main(){
    int q;
    scanf("%d", &q);
    while(q--){
        long long a,b;
        scanf("%lld %lld",&a, &b);
        while(a!=0 && b!=0){
            if(a>b) a %= b;
            else b %= a;
        }
        // a or b se = 0, + lai se ra uoc *2 de thanh tong 2 so bang 0
        printf("%lld\n",(a+b)*2);
    }
    return 0;
}
