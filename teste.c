#include <stdio.h>
int main() {
  long long n1, n2, s;
  scanf("%lld %lld", &n1, &n2);
  for (s = n1; s > 0; s--){
      if (n2 % s == 0){
          if (n1 % s == 0){
              printf("%lld ", s);
              break;
          }
      }
  }
}
