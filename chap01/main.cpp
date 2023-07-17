#include <stdio.h>

// 레퍼런스
// 변수에 "별명"을 붙여 변수에 메모리주소에 접근이 가능합니다.
// 선언과 동시에 참조의 대상을 선정해야 합니다.
// 참조의 대상을 변경하거나 NULL로 초기화 할 수 없습니다.
//
// 레퍼런스를 사용하는 이유는?
// 함수에 들어가는 파라미터를 레퍼런스로 전달하면 포인터와는 달리
// 함수안에서 변수처럼 사용하기 좋다.

int main() {
  int i = 3;
  int j = 7;
  int &ri = i;

  printf("i = %d, ri = %d\n", i, ri);
  ri++;
  printf("i = %d, ri = %d\n", i, ri);
  printf("i번지 = %x, ri번지 = %x\n", &i, &ri); // 메모리를 공유합니다.

  printf("i=%d, ri=%d, j=%d\n", i, ri, j);
  ri = j;
  printf("i=%d, ri=%d, j=%d\n", i, ri, j);
}
