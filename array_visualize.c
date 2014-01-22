#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int arr[5];
  arr[1] = 10;
  arr[2] = 20;
  arr[5] = 100;
  int i;
  for(i = 0; i <= 5; i++) {
    printf("|----------|----------|----------\n");
    printf("|          |          |          \n");
    printf("| arr[%d]   |  Value   |  %d      \n", i, arr[i]);
    printf("|&arr[%d]   |  Address |  %p      \n", i, &arr[i]);
    printf("|          |          |\n");
  }

  return 0;
}
