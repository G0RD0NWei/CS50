#include <cs50.h>
#include <stdio.h>
#define N 7

int main(void){
    int i , j , k , m;
        for (i = 0; i <= N; i++){
            for (j = N; j >= i; j--){
                printf(" ");
            }
            for (k = 0; k <= i; k++){
                printf("*");
            }
                printf("  ");
            for (m = 0; m <= i; m++){
                printf("*");
            }
                printf("\n");
        }
    }