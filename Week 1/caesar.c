#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc == 2)
    {
    string s = get_string("Plaintext: ");
    printf("Ciphertext: ");
    for(int i = 0; i < strlen(s); i++)
    {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                printf("%c" , s[i] + atoi(argv[1]));
            }
            else if (s[i] >= 'a' && s[i] <= 'z')
            {
                printf("%c" , s[i] + atoi(argv[1]));
            }
            else
            {
                printf("%c" , s[i]);
            }

    }
    }
    else
    {
        printf("Try Again You Idiod!!!");
    }

}