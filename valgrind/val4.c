// Memory leak
#include <stdio.h>
#include <stdlib.h>
#define MAX_ELEM 100

int main()
{


   int *ptr;

   ptr = malloc(sizeof(int) * MAX_ELEM);

   free(ptr);

   free(ptr); 

   return 0;
}
