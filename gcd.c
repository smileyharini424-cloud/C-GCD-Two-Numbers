#include <stdio.h>

int main()
{
    int first, second;
    int remainder;

    printf("Enter first number: ");
    scanf("%d", &first);

    printf("Enter second number: ");
    scanf("%d", &second);

    if (first < 0)
    {
        first = -first;
    }

    if (second < 0)
    {
        second = -second;
    }

    if (first == 0 && second == 0)
    {
        printf("GCD is not defined for 0 and 0.\n");
        return 0;
    }

    while (second != 0)
    {
        remainder = first % second;
        first = second;
        second = remainder;
    }

    printf("GCD = %d\n", first);

    return 0;
}
