#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{

     if (argc != 2)
    {
        printf("Wrong number of arguments. Please try again.\n");

        return 1;
    }
    else
      {
        for (int i = 0; i < strlen(argv[1]); i++)
        {
            if (!isalpha(argv[1][i]))
            {
                //printf("%c, %s\n", argv[1][i], argv[1]);
                printf("Key must be alphabetic chars only.");

                return 1;
            }
        }
    }

    // Store key as string and get length
    string k = argv[1];
    int kLen = strlen(k);

    // Get text to encode
    string p = get_string("Plaintext: ");

    // Loop through text
    for (int i = 0, j = 0; i <= strlen(p); i++)
    {
        // Get key for this letter
        int letterKey = tolower(k[j % kLen]) - 'a';

        // Keep case of letter
        if (isupper(p[i]))
        {
            // Get modulo number and add to appropriate case
            // eprintf("%c, %c", p[i], letterKey);
            printf("%c", 'A' + (p[i] - 'A' + letterKey) % 26);

            // Only increment j when used
            j++;
        }
        else if (islower(p[i]))
        {
            printf("%c", 'a' + (p[i] - 'a' + letterKey) % 26);
            j++;
        }
        else
        {
            // return unchanged
            printf("%c", p[i]);
        }
    }

    printf("\n");

    return 0;
}
