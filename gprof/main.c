#include <stdio.h>

#define COUNT1 1000000
#define COUNT2 10000000
#define COUNT3 100000000


void func1()
{
  long int i, sum=0;

  for (i=0;i<COUNT1;i++)
   sum += i;
}
void func2()
{
  long int i, sum=0;

  for (i=0;i<COUNT2;i++)
   sum += i;
}
void func3()
{
  long int i, sum=0;

  for (i=0;i<COUNT3;i++)
   sum += i;
}

int main()
{
    func1();
    func2();
    func3();

    return 0;
}
