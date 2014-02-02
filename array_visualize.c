#include <stdio.h>
#include <stdlib.h>

void visualize_array(int arr[], int length)
{
  int i;
  for(i = 0; i <= length; i++) {
    printf("|----------|----------|----------\n");
    printf("|          |          |          \n");
    printf("| arr[%d]   |  Value   |  %d      \n", i, arr[i]);
    printf("|&arr[%d]   |  Address |  %p      \n", i, &arr[i]);
    printf("|          |          |\n");
  }

  return 0;
}
