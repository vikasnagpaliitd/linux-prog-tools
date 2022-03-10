// Memory leak
#include <stdio.h>
#include <stdlib.h>
#define MAX_ELEM 100

int main()
{


   int *ptr;
   //int xyz;

   ptr = malloc(sizeof(int) * MAX_ELEM);

   free(ptr);

   printf("ptr[0] = %d\n", ptr[0]);
   

# if 0
   ptr = malloc(sizeof(int) * MAX_ELEM);

   printf("ptr[0] = %d\n", ptr[0]);

   // do something

   ptr = &xyz;
   ptr = &xyz;

   free(ptr);
#endif

   return 0;
}
