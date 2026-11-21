#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prints chars
    printf("------------------ chars ------------------\n");
    char c1 = 'H';
    char c2 = 'I';
    char c3 = '!';

    printf("%c%c%c\n", c1, c2, c3);
    // Prints chars' ASCII codes
    printf("%i %i %i\n", c1, c2, c3);

    // Prints string
    printf("------------------ string -----------------\n");
    string s = "HI!";
    printf("%s\n", s);

    // Treats string as array
    printf("%c %c %c\n", s[0], s[1], s[2]);

    // Prints string's ASCII codes, including NUL
    printf("------- string's ascii codes & NUL --------\n");
    printf("%i %i %i %i\n", s[0], s[1], s[2], s[3]);
}