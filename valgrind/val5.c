// Memory leak
#include <stdio.h>
#include <stdlib.h>
#define MAX_ELEM 100

int main()
{


   int *ptr;

   ptr = malloc(sizeof(int) * MAX_ELEM);

   ptr = malloc(sizeof(int) * MAX_ELEM*2);

   free(ptr);


   return 0;
}
