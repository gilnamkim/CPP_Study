#include <stdio.h>

int main() {
  int age = 25;
  bool isAdult = age > 19; // 대입식을 조건문으로 사용가능!
  if (isAdult) {
    puts("성인입니다.");
  }
}