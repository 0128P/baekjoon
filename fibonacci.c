#include <stdio.h>

long long fib(long long n) {
  if(n <= 1) {
    return n;
  } else {
    return fib(n-1) + fib(n-2);
  }
}

int main() {
  long long answer; 
  scanf("%lld",&answer);
  printf("%lld",fib(answer));
  return 0;
}
