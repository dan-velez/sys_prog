/* Copy input to output. */

#include <stdio.h>

int main()
{
    printf("%d\n", EOF);
    int c; /* Use `int` to access EOF constant. */
    c = getchar();
    while ((c = getchar()) != EOF) {
        putchar(c);
    }
}