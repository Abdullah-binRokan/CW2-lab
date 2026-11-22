#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Multiple strings
    printf("--------------- Multiple strings ----------\n");
    string s = "HI!";
    string t = "BYE!";

    printf("%s %s\n", s, t);

    // Array of strings
    printf("--------------- Array of strings ----------\n");
    string words[2];

    words[0] = "HI!";
    words[1] = "BYE!";

    printf("%s %s\n", words[0], words[1]);

    // string is an array of chars
    printf("---------- Strings are array of chars -----\n");
    printf("%c %c %c %c %c %c\n", words[0][0], words[0][1], words[0][2], words[0][3], words[0][4]);
    printf("%c %c %c %c %i %c\n", words[1][0], words[1][1], words[1][2], words[1][3], words[1][4], words[1][5]);
}