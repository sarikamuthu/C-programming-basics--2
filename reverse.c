#include <stdio.h>
int main() {
    int n, a = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while (n != 0) {
        remainder = n % 10;
        a = a * 10 + remainder;
        n /= 10;
    }
    printf("Reversed number = %d", a);
    return 0;
}