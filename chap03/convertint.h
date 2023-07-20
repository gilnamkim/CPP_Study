#include <stdio.h>

// 변환 생성자
//
// 호환되는 타입은 약간 달라도 산술 변환에 의해 대입 가능하다.
// 클래스의 객체도 암시적 변환이 가능한데 변환장치(operator)가 있어야 한다.
// 다른 타입으로부터 객체를 생성한다.

class Time {
private:
  int hour, min, sec;

public:
  Time(int h, int m, int s) {
    hour = h;
    min = m;
    sec = s;
  }

  Time(int abssec) {
    hour = abssec / 3600;
    min = (abssec / 60) % 60;
    sec = abssec % 60;
  }

  operator int() { return hour * 3600 + min * 60 + sec; }

  void OutTime() { printf("현재 시간은 %d:%d:%d입니다.\n", hour, min, sec); }
};

int main() {
  Time now(12, 34, 56);
  int i = now;
  printf("i = %d\n", i);
}
