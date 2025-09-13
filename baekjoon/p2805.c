#include <stdio.h>
#include <stdlib.h>

int main() {
  int n,m;
  scanf("%d %d",&n,&m);
  int *tree = (int*)malloc(sizeof(int)*n);
  for(int i=0;i<n;++i) {
    scanf("%d",&tree[i]);
  }

}
