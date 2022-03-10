#include <stdio.h>
#include "mod1_func.h"
#include "mod2_func.h"

void mod1_func()
{
  printf("mod1_func() is called\n");
  mod2_func();
}
