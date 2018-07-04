#include <stdio.h>
#include <cs50.h>

int main(void)
{
    while (true)
    {
        string s = get_string("Name: ");
        printf("Hello, %s\n", s);
    }
}