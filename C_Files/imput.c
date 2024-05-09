#include <stdio.h>
#include <string.h>

int main(void)
{

    char name[25]; //bytes
    int age;

    printf("what's your name?\n");
    //scanf("%s", &name);
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0';

    printf("How old are you?");
    scanf("%d", &age);

    printf("Hello %s, how are you?\n", name);
    printf("You are %d years old\n", age);

    return 0;
}
