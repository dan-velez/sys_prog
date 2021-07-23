#include <stdio.h>

int test_types()
{
    long x;
    double y;
    short z;
    char a;
    char* b;
}

int main()
{
    /* Print farenheit-celsius table. */

    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    /* Integer arithmic is truncated to zero. */
    int z = 5 / 9; 
    float y = 5.0 / 9.0;
    printf("%d %f", z, y);

    int a = 5;
    float b = 9.0;

    float c = a / b;
    int d = a / b;
}
