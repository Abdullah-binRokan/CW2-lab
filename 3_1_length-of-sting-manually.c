#include <cs50.h>
#include <stdio.h>
#include <string.h>

int string_length(string s);

int main(void)
{
    // Prompt for user's name
    string name = get_string("name: ");
    printf("------------ getting length manually ------\n");
    // getting length manually through our helper function
    int length = string_length(name);
    printf("length: %i\n", length);

    printf("------------ using string lib (strlen) ----\n");
    int str_length = strlen(name);
    printf("length: %i\n", str_length);
}

int string_length(string s)
{
    int counter = 0;
    // Count number of characters up until '\0' (aka NUL)
    while (s[counter] != '\0')
    {
        counter++;
    }

    return counter;
}