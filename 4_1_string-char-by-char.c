
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Input:  ");

    // Prints string char by char, using strlen, remembering string's length
    printf("Output: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");

    // Prints string all at once using printf, which figures out its length
    printf("Output: %s\n", s);
}