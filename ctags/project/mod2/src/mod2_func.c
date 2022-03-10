#include <stdio.h>
#include "mod2_func.h"
#include "mod3_func.h"

void mod2_func()
{
  printf("mod2_func() is called\n");
  mod3_func();
}
