#include <stdio.h>
#include <ctype.h>

int main(void)
{

    char unit;
    float  temp;

    printf("Is the tempereture in (F) or (C)?: \n");
    scanf("%c", &unit);

    unit = toupper(unit);

    if(unit == 'C'){
        printf("Enter the tmep in Celsius: \n");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf(" The temp in Farenheit is: %.1f\n", temp);
    }
    else if(unit == 'F'){
        printf("Enter the temp in Farenheit: \n");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("The temp in Celsius is: %.1f\n", temp);
    }
    else{
       printf("%c is not a valid unit of measurement\n", unit);
    }

    return 0;
}
