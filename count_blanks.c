/* Count blanks, tabs, and newlines. */

#include <stdio.h>

void count_blanks()
{
    int c, nb;
    while ((c = getchar()) != EOF) {
        if (c == '\t' || c == '\n' || c == ' ') ++nb;
    }
    printf("%d\n", nb);
}

int main()
{
    count_blanks();
}