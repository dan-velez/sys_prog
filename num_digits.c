/* Count number of occurences of each digit, whitespaces, and other chars. */

#include <stdio.h>

int main()
{
    printf("[*] Num Digits [*]\n");
    int c, i, nwhite, nother;
    int ndigit[10];

    nwhite = nother = 0;
    for (i = 0; i < 10; ++i)
        ndigit[i] = 0;

    while ((c = getchar()) != EOF)
        if (c >= '0' && c <= '9')
            ++ndigit[c-'0'];
        else if (c == ' ' || c == '\t' || c == '\n')
            ++nwhite;
        else
            ++nother;
    
    for (i = 0; i < 10; ++i)
        printf(" %d", ndigit[i]);
    
    /* Print other chars. */
}