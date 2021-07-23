#include <stdio.h>

int main()
{
    /* Print all escape characters available. */
    int i;
    for (i = 1; i <= 26; i++) {
        printf("\%c\n", i+96);
    }
}
