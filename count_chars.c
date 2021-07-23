/* Count characters in input. */

#include <stdio.h>

void count_chars_long()
{
    long nc;
    nc = 0;
    while (getchar() != EOF)
        ++nc;
    printf("%ld\n", nc);    
}

void count_chars_double()
{
    double nc;
    for (nc = 0; getchar() != EOF; ++nc)
        ;
    printf("%0.f\n", nc);
}

int main()
{
    count_chars_double();
}