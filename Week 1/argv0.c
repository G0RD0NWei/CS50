#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if(argc == 2)
    {
        printf("hello, %s , %i\n", argv[1] , argc);
    }
    else
    {
        printf("hello, world\n");
    }
}