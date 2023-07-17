#include <stdio.h>

// new 연산자
// C에서 메모리를 할당,해제할 때 malloc,free 함수를 사용하지만
// C++에서는 연산자로 메모리를 할당,해제합니다.
// 함수가 아닌 연산자이기 때문에 따로 헤더파일을 include할 필요가 없습니다.

int main() {
  // 포인터 생성
  int *pi;
  pi = new int(4);           // 포인터 = new 타입(초기값);
  printf("pi = %x\n", pi);   // 주소값
  printf("*pi = %d\n", *pi); // 변수값

  *pi = 123;
  printf("pi = %x\n", pi);
  printf("*pi = %d\n", *pi);
  delete pi; // 메모리를 해제할때 사용하는 연산자

  // 배열의 메모리를 할당,해제하는 방법
  int *ar;
  ar = new int[5];
  for (int i = 0; i < 5; i++) {
    ar[i] = i;
  }
  for (int i = 0; i < 5; i++) {
    printf("%d번째 = %d", i, ar[i]);
  }
  delete[] ar;
}
