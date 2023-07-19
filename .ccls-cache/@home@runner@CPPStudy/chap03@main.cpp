#include <stdio.h>
#include <string.h>

// 생성자
//
//
class Human {
private:
  char name[12];
  int age;

public:
  // 생성자(클래스이름과 동일합니다)
  Human(const char *aname, int aage) {
    strcpy(name, aname);
    age = aage;
  }
  void intro() { printf("이름 = %s, 나이 = %d\n", name, age); }
};

int main() {
  // 객체를 초기화하는 다양한 방법
  Human kim("김상형", 29);
  kim.intro();
  Human lee = Human("이일형", 30);
  lee.intro();
  Human park = {"박지성", 42};
  park.intro();
}
