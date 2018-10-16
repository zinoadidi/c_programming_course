#include <stdio.h>
#include <stdlib.h>

int main(){
     printf(
        "\n\t=============+++++++++++++++++++++++++++++++++++==========================================\n"
        "\tProgram to count between 1 and 100. Output Hi for No/3, Guy for No/ 5 and No for others\n"
        "\t=============+++++++++++++++++++++++++++++++++++==========================================\n"
    );

    for(int i = 1; i <= 100; i++ ){
        if(i%3 == 0){
            printf("Hi");
        }
        if(i%5 == 0){
            printf("Guy");
        }
        if(i % 5 != 0 && i % 3 != 0){
            printf("%d",i);
        }
        printf("\n");
    }

    printf("\n\npress enter key to continue...");
    getch();
    return 0;
}