#include <stdio.h>

int main(void)
{

    // swich = A more efficient alternative to using many "else if" statements
    //         allow a value to be tested for equality againstmany cases

    char grade;

    printf("Enter your letter grade: \n");
    scanf("%c", &grade);

    if(grade == 'A')
    {
        printf("Perfect!!!\n");
    }
    else if(grade == 'B'){
       printf("You did good!!!\n");
    }
    else if(grade == 'C')
    {
       printf("You did okay!!!\n");
    }
    else if(grade == 'D'){
       printf("At least it's not an F!!!\n");
    }
    else if("grade == 'F")
    {
       printf("YOU FAILD!!!\n");
    }
    else
    {
      printf("Thats's not a valid grade!\n");
    }



    return 0;
}
