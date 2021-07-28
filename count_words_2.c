#include <stdio.h>

#define IN 1
#define OUT 0

int count_words()
{
    int nw, c, state;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            state = OUT;
        }
        else if (state == OUT) {
            state = IN;
            ++nw;
        }
        else {
            state = IN;
        }
    }
    return nw;
}

int main()
{
    printf("[*] Count Words [*]\n");
    int words = count_words();
    printf("\n[*] Num words: %d", words);
    return 0;
}
