#include <stdio.h>

int main(void)
{

    const double PI = 3.14159;
    double radius;
    double circumference;
    double area;

    printf("Enter radius of a circle: \n");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("circumference: %lf"\n, circumference);
    printf("area: %lf\n", area);

    return 0;
}
