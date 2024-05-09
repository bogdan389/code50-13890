#include <stdio.h>

int main(void)
{

    // format specifier % = defines and formats a type of data to be displayed

    // %c = chracter
    // %s = string (array of characters)
    // %f = float
    // %lf = double
    // %d = integer

    // %.1 = decimal precision
    // %1 = minimum field width
    // %- = left align

    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("item 1: $%.2f\n", item1);
    printf("item 2: $%.2f\n", item2);
    printf("item 3: $%.2f\n", item3);

    return 0;
}
