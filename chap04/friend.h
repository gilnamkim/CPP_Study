#include <stdio.h>

// 프렌드 함수
//
// 정보은폐는 꼭 필요한 기법이지만 너무 엄격하면 비효율적입니다.
// 프렌드는 예외를 두어 클래스의 모든 멤버를 자유롭게 접근할 수 있습니다.
// 두 개의 클래스가 서로 밀접하고 상대편의 멤버를 참조해야할 경우
// 클래스를 통째로 프렌드로 지정할 수 있습니다.

// class Date;
class Time {
  // friend void OutToday(Date &, Time &);
  friend class Date; // 클래스를 프렌드로 지정할 수 있습니다.

private:
  int hour, min, sec;

public:
  Time(int h, int m, int s) {
    hour = h;
    min = m;
    sec = s;
  }

  void printTime() { printf("지금 시간은 %d:%d:%d입니다.\n", hour, min, sec); }
};

class Date {
  // friend void OutToday(Date &, Time &);
  friend void printDate(Date &); // 프렌드는 선언문의 원형이 필요합니다.

private:
  int year, month, day;

public:
  Date(int y, int m, int d) {
    year = y;
    month = m;
    day = d;
  }

  void printDate() {
    printf("오늘은 %d년 %d월 %d일 입니다.\n", year, month, day);
  }
};

// Date클래스에서 프렌드를 선언해서 Date멤버에 자유롭게 접근가능합니다.
void printDate(Date &d) {
  printf("오늘은 %d년 %d월 %d일 입니다.\n", d.year, d.month, d.day);
  d.printDate();
}

// void OutToday(Date &d, Time &t) {
//   printf("오늘은 %d년 %d월 %d일이며 지금 시간은 %d:%d:%d입니다.\n", d.year,
//          d.month, d.day, t.hour, t.min, t.sec);
// }

int main() {
  Date d(2018, 06, 29);
  Time t(12, 34, 56);
  // OutToday(d, t);
  printDate(d);
}
