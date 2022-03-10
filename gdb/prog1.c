#include <stdio.h>

int main()
{
   int arr[] = {10, 11, 12, 13, 14};

   int *ptr;


   ptr = arr;

   
   printf("*ptr = %d\n", *ptr);
   printf("ptr[0] = %d\n", ptr[0]);
   printf("ptr[1] = %d\n", ptr[1]);

   ptr++;
   printf("\nafter ptr++\n");


   printf("*ptr = %d\n", *ptr);
   printf("ptr[0] = %d\n", ptr[0]);
   printf("ptr[1] = %d\n", ptr[1]);

   return 0;
}
