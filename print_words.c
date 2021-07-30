/* Print input, one word per line. */

#include <stdio.h>

void print_words()
{
    int c;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t')
            putchar('\n');
        else
            putchar(c);
    }
}

int main()
{
    printf("[*] Print Words [*]\n");
    print_words();
}