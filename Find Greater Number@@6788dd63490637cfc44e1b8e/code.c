#include <stdio.h>

int main() {
    int num1, num2;

    // Take input from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Compare the numbers and print the greatest
    if (num1 > num2) {
        printf("%d", num1);
    } else if (num2 > num1) {
        printf("%d", num2);
    } else {
        printf("Both numbers are equal.");
    }

    return 0;
}
