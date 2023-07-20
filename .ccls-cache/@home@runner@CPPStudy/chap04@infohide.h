#include <stdio.h>

// 캡슐화
//
// 정보은폐의 목적으로 직접 변수에 접근을 막는다.
// get, set으로 시작하는 액세스함수를 통해 변수를 읽고 쓴다.
// 대형 프로그램을 만들때 객체를 먼저 만들고 조립하는 방식이 효율적이다.
// 사용자에게 프로그램의 세부구현정보를 굳이 제공해 줄 필요는 없다.
// 최소한의 지식만으로 객체를 활용할 수 있도록 추상화해야 한다.
class Time {
private:
  int hour, min, sec;

public:
  Time(int h, int m, int s) {
    SetHour(h);
    SetMinute(m);
    sec = s;
  }

  int GetHour() { return hour; }
  void SetHour(int h) {
    if (h >= 0 && h < 24) {
      hour = h;
    }
  }

  int GetMinute() { return min; }
  void SetMinute(int m) {
    if (m >= 0 && m < 60) {
      min = m;
    }
  }
  int GetSecond() { return sec; }

  void OutTime() { printf("현재 시간은 %d:%d:%d입니다.\n", hour, min, sec); }
};

int main() {
  Time now(12, 34, 56);
  now.SetHour(40);
  now.OutTime();
  now.SetHour(9);
  now.OutTime();
}
