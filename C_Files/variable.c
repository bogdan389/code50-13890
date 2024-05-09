#include <stdio.h>

int main(void)
{

    // variable = Allocated space in memory to store a value.
    //            We prefer  to a variable's name to access the store value.
    //            That variable now behaves as if it was the value it contains.
    //            BUT we need to declare what type of data we are storing.

    int x; //declaration
    x = 123; //initialization
    int y = 321; //declaration + initialization

    int age = 12; //integer
    float gpa = 2.05; //floating point number
    char grade = 'A'; //single character
    char name[] = "Bogdan"; //array of characters

    printf("Hello, %s\n", name);
    printf("You are %d years old\n", age);
    printf("your average grade is %c\n", grade);
    printf("Your gpa is %f\n", gpa);

    return 0;
}
