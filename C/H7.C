//c program to demonstrate input of primary data type
#include <stdio.h>

int main()
{
    /*
     * Declare all primitive and derived types
     */
    char charVal;
    unsigned char uCharVal;

    short shortVal;
    unsigned short uShortVal;

    int intVal;
    unsigned int uIntVal;

    long longVal;
    unsigned long uLongVal;

    long long longLongVal;
    unsigned long long uLongLongVal;

    float floatVal;
    double doubleVal;
    long double longDoubleVal;

    /*
     * Read input in each type
     */
     clrscr();
    printf("\nEnter a character: ");
    charVal = getchar();
    getchar();
     // <-- Dummy getchar() to capture enter

    printf("\nEnter another character: ");
    uCharVal = getchar();
    getchar(); // <-- Dummy getchar() to capture enter

    printf("\nEnter a signed short value: ");
    scanf("%hi", &shortVal);

    printf("\nEnter an unsigned short value: ");
    scanf("%hu", &uShortVal);

    printf("\nEnter an signed integer value: ");
    scanf("%d", &intVal);

    printf("\nEnter an unsigned integer value: ");
    scanf("%lu", &uIntVal);

    printf("\nEnter a signed long value: ");
    scanf("%ld", &longVal);

    printf("\nEnter an unsigned long value: ");
    scanf("%lu", &uLongVal);

    printf("\nEnter a signed long long value: ");
    scanf("%lld", &longLongVal);

    printf("\nEnter an unsigned long long value: ");
    scanf("%llu", &uLongLongVal);

    printf("\nEnter a float value: ");
    scanf("%f", &floatVal);

    printf("\nEnter a double value: ");
    scanf("%lf", &doubleVal);

    printf("\nEnter a long double value: ");
    scanf("%Lf", &longDoubleVal);


    /*
     * Print the value of all variable
     */
    printf("\nYou entered character: '%c' \n", charVal);
    printf("You entered unsigned character: '%c' \n\n", uCharVal);

    printf("You entered signed short: %hi \n", shortVal);
    printf("You entered unsigned short: %hu \n\n", uShortVal);

    printf("You entered signed int: %d \n", intVal);
    printf("You entered unsigned int: %lu \n\n", uIntVal);

    printf("You entered signed long: %ld \n", longVal);
    printf("You entered unsigned long: %lu \n\n", uLongVal);

    printf("You entered signed long long: %lld \n", longLongVal);
    printf("You entered unsigned long long: %llu \n\n", uLongLongVal);

    printf("You entered float: %f \n", floatVal);
    printf("You entered double: %lf \n", doubleVal);
    printf("You entered long double: %Lf \n", longDoubleVal);

    return 0;
}
