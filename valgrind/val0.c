// Memory error
#include <stdio.h>
#include <string.h>

int main()
{
   char *ptr;

   strcpy(ptr, "hello");
   
   printf("%s\n", ptr);

   return 0;
}
