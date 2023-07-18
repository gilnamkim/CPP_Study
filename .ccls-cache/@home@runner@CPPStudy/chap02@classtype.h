#include <stdio.h>

// 클래스의 타입
//
// 클래스로 기본형과 동일한 타입을 만들 수 있습니다.
// 객체의 배열이나 포인터같은 파생형도 만들 수 있습니다.

class Human {
public:
  char name[12];
  int age;

  void intro() { printf("이름 = %s, 나이 = %d\n", name, age); }
};

int main() {
  Human arFriend[10] = {
      {"문동욱", 49},
      {"김유진", 49},
      {"박상막", 49},
  };

  Human *pFriend;
  pFriend = &arFriend[1];
  pFriend->intro();
}
