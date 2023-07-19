#include <stdio.h>
#include <string.h>

// 생성자와 파괴자
//
// 생성자에서 메모리를 동적할당(포인터 등)했다면
// 파괴자를 호출해 메모리누수를 막아야한다.
class Human {
private:
  char *pname;
  int age;

public:
  Human(const char *aname, int aage) {
    pname = new char[strlen(aname) + 1];
    strcpy(pname, aname);
    age = aage;
    printf("%s 객체의 생성자가 호출되었습니다.\n", pname);
  }

  ~Human() {
    printf("%s 객체가 파괴되었습니다.\n", pname);
    delete[] pname;
  }

  void intro() { printf("이름 = %s, 나이 = %d\n", pname, age); }
};

int main() {
  Human boy("gilnami", 12);
  boy.intro();
}
