#include <cs50.h>
#include <stdio.h>

void draw (int n);

int main(void)
{
    int heigth = get_int("Height:");
    draw(heigth);
}

void draw (int n)
{
    if (n <= 0)
    {
       return;
    }

    draw( n - 1);

    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}
