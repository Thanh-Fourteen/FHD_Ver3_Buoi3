//c1
# include <stdio.h>

int main() {
	int a, b, c, d;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	
	int ans = 0, min_distance = 0, temp_distance;
	
	if (b > a){
		temp_distance = b - a;
		ans = 1;
		min_distance = temp_distance;
	}
	
	if (c > a){
		temp_distance = c - a;
		if (temp_distance < min_distance || min_distance == 0){
			ans = 2;
			min_distance = temp_distance;
		}
	}
	
	if (d > a){
		temp_distance = d - a;
		if (temp_distance < min_distance || min_distance == 0){
			ans = 3;
			min_distance = temp_distance;
		}
	}
	printf("%d", ans);
	return 0;
}



//c2
#include <stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int distance_Binh = b - a;
    int distance_Chi = c - a;
    int distance_Dung = d - a;

    if (distance_Binh > 0 && distance_Binh <= distance_Chi && distance_Binh <= distance_Dung) {
        printf("1\n"); 
    } else if (distance_Chi > 0 && distance_Chi <= distance_Binh && distance_Chi <= distance_Dung) {
        printf("2\n"); 
    } else if (distance_Dung > 0 && distance_Dung <= distance_Binh && distance_Dung <= distance_Chi) {
        printf("3\n"); 
    } else {
        printf("0\n");
    }

    return 0;
}

