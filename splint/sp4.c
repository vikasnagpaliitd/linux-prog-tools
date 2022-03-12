// Copyright: Vikas Nagpal (Anuttara Learning)
#include <stdio.h>
#include <string.h>
#define MAX_LEN 100

char *do_something()
{
    char local[MAX_LEN];

    strcpy(local, "always remain happy");

    return local;
}

int main()
{
    char *ret;

    ret = do_something();

    printf("ret = %s\n", ret);
    return 0;
}
