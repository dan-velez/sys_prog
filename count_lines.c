/* Count lines in input. */

#include <stdio.h>

void count_lines()
{
    int nl, c;
    while ((c = getchar()) != EOF)
        if (c == '\n') ++nl;
    printf("%d\n", nl);
}

int main()
{
    count_lines();
}