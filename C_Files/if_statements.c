#include <stdio.h>

int main(void)
{

    int age;

    printf("Enter your age\n");
    scanf("%d", &age);

    if(age >= 18)
    {
        printf("you are now signed up!");
    }
    else if(age == 0)
    {
         printf("you can not sign up! You were just born!");
    }
    else if(age < 0)
    {
        printf("you havent been born yet!");
    }
    else
    {
        printf("you are to young to sign up!");
    }


    return 0;
}
