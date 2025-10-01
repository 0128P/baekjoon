#include <stdio.h>

int main() {
  int n;
  scanf("%d",&n);
  int *arr = (int*)malloc(sizeof(int)*n);
  for(int i=0;i<n;++i) {
    scanf("%d",&arr[i]);
  }
}

/*
 *
 * 모르겠다시발...DP어떻게풀지 
 *
 */
