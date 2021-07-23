#include <stdio.h>

/* Define symbolic constants. */
#define UPPER 300
#define LOWER 0
#define STEP 20

void converter_1()
{
    /* Convert farenheit to celsius. */
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    printf("Farenheit \t Celsius\n");
    printf("------------------------\n");
    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);

        /* Print at least 3 chars wide, 6 chars wide. */
        printf("%10.0f   |  %8.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}

void converter_2()
{
    /* A different way to write temperature conversion program. */
    int fahr;
    for (fahr = UPPER; fahr >= LOWER; fahr -= STEP)
        printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32));
}

int main()
{
    // converter_1();
    converter_2();
}