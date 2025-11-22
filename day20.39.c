#include <stdio.h>

int main() {
    int num, digit;
    int product = 1;   // initialize product
    int hasOdd = 0;    // flag to check if odd digits exist

    printf("Enter a number: ");
    scanf("%d", &num);

    // handle negative numbers
    if (num < 0) {
        num = -num;
    }

    while (num != 0) {
        digit = num % 10;       // extract last digit
        if (digit % 2 != 0) {   // check if odd
            product *= digit;
            hasOdd = 1;         // mark that we found odd digit
        }
        num /= 10;              // remove last digit
    }

    if (hasOdd)
        printf("Product of odd digits = %d\n", product);
    else
        printf("No odd digits found.\n");

    return 0;
}
