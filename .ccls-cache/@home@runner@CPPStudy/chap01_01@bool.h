#include <stdio.h>

// C는 별도의 진위형(boolean)이 없어 정수를 대신 사용하였다.
//    ex) return 1; OR return 0;
// 거짓은 0으로 단 하나이지만 0 이외에는 모두 참이여서 일관성이 없다.
// 대입식을 조건문으로 사용하여 코드에 실수가 종종 있었다.
// C++은 bool타입을 도입하여 true,false로 참,거짓을 판별한다.

int main() {
  int age = 25;
  bool isAdult = age > 19; // 대입식에 따라 true,false
  if (isAdult) {
    puts("성인입니다.");  // puts함수는 문자열타입을 출력하고 개행까지 실행해주는 함수
  }
}