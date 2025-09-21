#include <stdio.h>

int main() {
  int n;
  scanf("%d",&n);
  for(int i=0;i<n;++i) {
    int a,b,x;
    scanf("%d %d %d",&a,&b,&x);
    int w = a*(x-1)+b;
    printf("%d\n",w);
  }
  return 0;
}
