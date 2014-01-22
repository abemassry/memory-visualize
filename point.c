#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int x = 1;
  int *p = &x;
  printf("|----------|----------\n");
  printf("|          |          \n");
  printf("| Value x  |  %d      \n", x);
  printf("| Address  |  %p      \n", &x);
  printf("|          |\n");
  printf("|----------|----------\n");
  printf("|          |          \n");
  printf("|  Value *p|  %d      \n", *p);
  printf("|  Address |  %p      \n", p);
  printf("|          |\n");

  return 0;
}
