#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int current_position = 1; 
    int current_number = 1; 
    
    while (1) {
        int temp = current_number; 
        int num_digits = 0;
        while (temp > 0) {
            num_digits++;
            temp /= 10;
        }

        if (n <= num_digits) {
            int position = num_digits - n;
            while (position > 0) {
                current_number /= 10;
                position--;
            }
            printf("%d\n", current_number % 10);
            break;
        }

        n -= num_digits;
        current_position += num_digits;
        current_number++;
    }

    return 0;
}

