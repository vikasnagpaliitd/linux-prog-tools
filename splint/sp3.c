// Copyright: Vikas Nagpal (Anuttara Learning)
#include <stdio.h>

const char *conv_to_str(int val)
{
    const char *result;

    switch(val)
    {
        case 1:
             result = "one";
             break;

        case 2:
             result = "two";

        case 3:
             result = "three";
             break;

        default:
             result = "less than 1 or more than 3";
             break;
    }

    return result;
}

int main()
{
    printf("conv_to_str(2) = %s", conv_to_str(2));
    return 0;
}
