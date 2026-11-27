#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int string_length(string s);

int main(void)
{
    printf("---------------- uppercase manually ----------\n");
    // Prompt for user's name
    string s = get_string("before: ");
    for (int i = 0, len = strlen(s); i < len; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] -= 32;
        }
    }

    printf("after: %s\n", s);

    printf("----------- uppercase using ctype lib ---------\n");
    // Prompt for user's name
    string u = get_string("before: ");
    for (int j=0, length = strlen(u); j < length; j++)
    {
        u[j] = toupper(u[j]);
    }

    printf("after: %s\n", u);
}
