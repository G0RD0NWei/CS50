#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string a = get_string("Name: ");
    for (int i = 0; i < strlen(a); i++)
    {
        printf("%c %i\n", a[i], (int)a[i]);
    }
}