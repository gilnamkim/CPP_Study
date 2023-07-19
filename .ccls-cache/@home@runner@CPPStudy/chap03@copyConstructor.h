#include <stdio.h>
#include <string.h>

// 복사 생성자
//
// 객체의 요소를 복사할 때는 복사 생성자를 정의하여 별도의 메모리를 할당하여야
// 한다 그렇지 않으면 두 객체가 메모리를 공유하여 이중 해제된다.
class Human {
private:
  char *pname;
  int age;

public:
  Human(const char *aname, int aage) {
    pname = new char[strlen(aname) + 1];
    strcpy(pname, aname);
    age = aage;
  }

  Human(const Human &other) {
    pname = new char[strlen(other.pname) + 1];
    strcpy(pname, other.pname);
    age = other.age;
  }

  ~Human() { delete[] pname; }

  void intro() { printf("이름 = %s, 나이 = %d\n", pname, age); }
};

void printHuman(Human who) { who.intro(); }

// 같은 타입의 객체는 레퍼런스로 받아야한다.
// 값으로 받게되면 무한루프 발생
int main() {
  Human kang("강감찬", 1424);
  Human boy = kang;

  printHuman(boy);
}
