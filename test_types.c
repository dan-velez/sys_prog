/* Testing C types (char, numbers, addresses). */

#include <stdio.h>

int test_types()
{
    long x;
    double y;
    short z;
    char a;
    char* b;
}

void test_division()
{
    /* Integer arithmic is truncated to zero. */
    int z = 5 / 9;
    float y = 5.0 / 9.0;
    printf("%d \t %f \n", z, y);

    /* Dividing integers by floats. */
    int a = 5;
    int a_ = 9;
    float b = 9.0;

    float c = a / b;
    int d = a / b; /* Truncated... */
    float e = a / 9;
    
    printf("%.1f \t %d \t %.1f \n", c, d, e);
}

void test_assignment()
{
    /* An assignment statement returns left hand value. */
    int a;
    printf("%d", a=5);
}

int main() 
{
    test_division();
}