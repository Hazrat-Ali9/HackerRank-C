// Sum of Digits of a Five Digit Number Program :

#include <stdio.h>

int main() {
    
    int number;
    scanf("%d", &number);

   
    int digit_sum = 0;
    int temp = number;

    while (temp > 0) {
        digit_sum += temp % 10;
        temp /= 10;  
    }

    
    printf("%d\n", digit_sum);

    return 0;
}