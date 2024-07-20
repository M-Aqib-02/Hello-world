#include <stdio.h>
#include <cs50.h>

int main(void)
{
// This Line of Code is for to take a string input
    string name = get_string("What's your name? ");

    //  This Line of Code is for Printing Hello Your Name on Screen
    printf("hello, %s\n", name);
}