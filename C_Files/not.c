#include <stdio.h>
#include <stdbool.h>

int main(void)
{
   // logical operators = ! (NOT) reverses the state of a contition

   bool sunny = false;

   if(!sunny)
   {
      printf("It's cloudy outside!\n");
   }
   else
   {
      printf("It's sunny outside\n");
   }

    return 0;
}
