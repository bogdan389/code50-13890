#include <stdio.h>

int main(void)
{

    // swich = A more efficient alternative to using many "else if" statements
    //         allow a value to be tested for equality againstmany cases

    char grade;

    printf("Enter your letter grade: \n");
    scanf("%c", &grade);

    switch(grade){
        case 'A':
           printf("Perfect!!!\n");
           break;
        case 'B':
           printf("You did good!!!\n");
           break;
        case 'C':
           printf("You did okey!!!\n");
           break;
        case 'D':
           printf("At least is's not an F!!!\n");
           break;
        case 'F':
           printf("YOU FAILD!!!\n");
           break;
        default:
           printf("Please enter a valid grade!!!\n");
    }


    return 0;
}
