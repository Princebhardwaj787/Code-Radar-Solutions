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
        printf("The greatest number is: %d\n", num1);
    } else if (num2 > num1) {
        printf("The greatest number is: %d\n", num2);
    } else {
        printf("Both numbers are equal.\n");
    }

    return 0;
}
