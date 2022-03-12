#include <stdio.h>

int main()
{
    int x;

    printf("Enter an integer: ");
    scanf("%d", &x);

    if (x < 10)
        printf("x is less than 10\n");
    else if (x < 20)
        printf("x is greater than or equal to 10 and x is less than 20\n");
    else
        printf("x is greater than or equal to 20\n");

    return 0;
}
