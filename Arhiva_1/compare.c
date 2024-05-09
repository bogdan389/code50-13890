#include <cs50.h>
#include <stdio.h>

int main(void)
{
   int x =  get_int("what is x? ");
   int y = get_int("what is y? ");

    if (x < y)
    {
       printf ("x is less then y\n");
    }
    else if (x > y)
    {
       printf("x is greater than y\n");
    }
    else
    {
       printf("x is equal yo y\n");
    }
}
