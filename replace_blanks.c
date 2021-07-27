/* Copy input to output, replacing multi blanks with single blanks. */
#include <stdio.h>

void replace_blanks()
{
    int c;
    int bc;
    while ((c = getchar()) != EOF)
    {
        if (c == '\t' || c == '\n' || c == ' ') {
            if (bc < 1) putchar(c);
            ++bc;
        } else {
            putchar(c);
            bc = 0;
        }
    }
}

int main()
{
    replace_blanks();
}
