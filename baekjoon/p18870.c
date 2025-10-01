#include <stdio.h>

int compare(const void *a, const void *b) {
  return *(int*)a - *(int*)b;
}

int binary_search(int arr[], int size, int target) {
  int left = 0, right = size - 1;
  while(left <= right) {
    int mid = left + (right - left) / 2;
    if(arr[mid] == target) return mid;
    else if(arr[mid] < target) left = mid + 1;
    else right = mid - 1;
  }
  return -1;
}

int main() {
  int n;
  scanf("%d",&n);
  int *arr = (int*)malloc(sizeof(int)*n);
  for(int i=0;i<n;++i) {
    scanf("%d",&arr[i]);
  }
  qsort(arr,n,sizeof(int),compare);

}
