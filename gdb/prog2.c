#include <stdio.h>
#include <stdlib.h>
#define MAX_ELEM 10

int *init_block()
{
  int i;
  int value = 10;
  int *ptr = malloc(sizeof(int) * MAX_ELEM);
  for(i=0;i<MAX_ELEM;i++)
     ptr[i] = value++;
  return ptr;
}

int main()
{
   int *block, *orig;


   orig = block = init_block(); 

   
   printf("*block = %d\n", *block);
   printf("block[0] = %d\n", block[0]);
   printf("block[1] = %d\n", block[1]);

   block++;
   printf("\nafter block++\n");


   printf("*block = %d\n", *block);
   printf("block[0] = %d\n", block[0]);
   printf("block[1] = %d\n", block[1]);

   free(orig);

   return 0;
}
