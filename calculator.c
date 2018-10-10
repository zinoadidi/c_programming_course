#include <stdio.h>
#include <stdlib.h>



int num1,num2,option,total;
char sign;

int main(){
    system("cls");
    system("color 05");
    system("title calculator by zino adidi");
    printf(
        "\n\t============================================================="
        "\n\t\t\t Welcome to Calculator\n"
        "\t============================================================="
        "\n\t\t Choose one of the following options to begin\n\n"

        "\t\t1. Addition \t\t 2. Subtraction\n"
        "\t\t3. Division \t\t 4. Multiplication\n"
        "\t\t5. Exit\n"

        "\n\t\tEnter a number from the options above:"
    );

    scanf("%d",&option);
    if(option >0 && option <4){
        printf("\nEnter the first number:");
        scanf("%d",&num1);
        printf("\nEnter the second number:");
        scanf("%d",&num2);
    }else{
        if(option == 5){
            return 0;
        }else{
            Error(1);
        }
    }

    switch(option){
        case 1:
            sign = '+';
            total = num1 + num2;
        break;
        case 2:
            sign = '-';
            total = num1 - num2;
        break;
        case 3:
            sign = '/';
           total = num1 / num2;
        break;
        case 4:
            sign = 'X';
            total = num1 * num2;
        break;
        case 5:
            return 0;
        break;
        default:
        ;
    }
    printf(
       "\x1b[32m"
       "\n\t\t%d %c %d = %d\n"
       "\x1b[0m"
       ,num1,sign,num2,total
    );
    printf("\n\npress enter key to continue...");
    getch();
    main();

}


int Error(int option){
    switch(option){
        case 1:
            printf("\x1b[31m""\nPlease select an option between 1 and 4\n""\x1b[0m");
        break;
        default:
            printf("\x1b[31m""\nSystem encountered an error. Kindly contact the developer :)\n""\x1b[0m");
            return 1;
    }
    printf("\n\npress enter key to continue...");
    getch();
    main();

}
