#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Input: ");
    printf("output: \n");
    for(int i = 0; i < strlen(s); i++)
    {
        printf("String \"%s\" is %lu characters long.\n", s, strlen(s));
    }
}