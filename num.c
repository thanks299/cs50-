#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string answer = get_string("What's your name? ");  // CS50's get_string function
    printf("Hello, %s\n", answer);
}
