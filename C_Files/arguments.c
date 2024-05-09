#include <stdio.h>

void birthday(){
   printf("Happy birthday dear %s!\n", name);
   printf("You are %d years old\n", age);
}

int main(void){
   char name[] = "Bro";
   int age = 21;

   birthday(name, age);

   return 0;
}
