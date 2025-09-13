#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
  return *(int*)b - *(int*)a;
}

int main() {
  char arr[10];
  scanf("%s",arr);
  int *numarr = (int*)malloc(sizeof(int)*strlen(arr));
  for(int i=0;i<strlen(arr);++i) {
    numarr[i] = arr[i] - '0';
  }
  qsort(numarr,strlen(arr),sizeof(int),compare);
  for(int i=0;i<strlen(arr);++i) {
    printf("%d",numarr[i]);
  }
  free(numarr);
  return 0;
}
