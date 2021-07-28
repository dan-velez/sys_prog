/* Barebones implementation of UNIX program wc. */

#include <stdio.h>

#define IN      1 /* Inside a word. */
#define OUT     0 /* Outside a word. */

void count_words()
{
    /* Count lines, words, and characters in input. */
    int c, nw, nl, nc, state;
    state = OUT;
    // nl = nw = nc = 0;
       /* ++nc;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT) {
            state = IN;
            ++nw;
        }*/
    while ((c = getchar()) != EOF) {
        
    }
    printf("Hello world!\n");
    // printf("Lines: %d Words: %d Chars: %d\n", nl, nw, nc);
}

int main()
{
    printf("[*] Count Words [*]\n");
    count_words();
    return 0;
}