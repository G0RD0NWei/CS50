#include <stdio.h>
#include <cs50.h>
int square(int x);
int main(void){
    int x = 2;
        for (x = 2 ; x < 999999999 ; x++){
        printf("%i\n", square(x));
        }
}
int square(int n)
{
    return n * n;
}