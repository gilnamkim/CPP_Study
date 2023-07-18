#include <stdio.h>
#include <stdlib.h>

// 인라인 함수
//
// 간단한 작업을 수행하는 함수는 인라인 함수를 사용하여 불필요한 함수 호출을
// 최소화 한다 컴파일할때 함수호출부가 함수 본체로 대체된다 인라인 여부는
// 컴파일러가 결정한다 재귀호출 함수, 너무 긴 함수, 함수 포인터로 가리키는
// 함수는 사용불가

int randfunc(int n) { return rand() % n; }

inline int random(int n) { return rand() % n; }

int main() {
  int i, j, k, l;

  i = randfunc(10);
  j = randfunc(100);
  k = randfunc(50);
  l = random(20);
  printf("난수 = %d,%d,%d\n", i, j, k);
  printf("인라인 = %d\n", l);
}
