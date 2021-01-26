#include <stdio.h>
int main() {
    int a, b;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);

    // Swapping

    // a = (initial_a - initial_b)
    a = a - b;   
 
    // b = (initial_a - initial_b) + initial_b = initial_a
    b = a + b;

    // a = initial_a - (initial_a - initial_b) = initial_b
    a = b - a;

    printf("After swapping, a = %d\n", a);
    printf("After swapping, b = %d\n", b);
   return 0;
}
