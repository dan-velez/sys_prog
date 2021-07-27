/* Make tabs and backspaces visible. */

#include <stdio.h>

void visible_blanks()
{
    int c;
    while((c = getchar()) != EOF) {
        if(c == '\t') printf("\\t");
        else if(c == '\b') printf("\\b");
        else if(c == '\\') printf("\\\\");
        else putchar(c);
    }
}

int main()
{
    printf("[*] Visible blanks [*]\n");
    visible_blanks();
}