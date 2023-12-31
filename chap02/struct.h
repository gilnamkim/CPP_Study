#include <stdio.h>

// 구조체의 확장
//
// 구조체는 데이터의 집합이여서 반드시 기능을 수행하는 함수가 있어야 한다.
// 정보와 동작은 서로 필요로 하는 의존 관계
// ===============================================================
struct SHuman {
  char name[12];
  int age;
};

void IntroHuman(SHuman who) {
  printf("이름 = %s, 나이 = %d\n", who.name, who.age);
}
// ================================================================

// 캡슐화
// 밀접한 관계를 가지는 구조체와 함수를 한쌍으로 묶는 것
// 아래의 intro함수는 인라인속성을 가진다.
// ================================================================
struct SSHuman {
  char name[12];
  int age;

  void intro() { printf("이름 = %s, 나이 = %d\n", name, age); }
};
// ================================================================

// 맴버 함수 외부 작성
// 구조체 안에 함수의 원형만 선언하고 본체는 외부에 따로 정의한다.
// 아래의 intro함수는 일반함수 호출하듯이 스택을 경유하여 호출된다.
// ================================================================
struct SSSHuman {
  char name[12];
  int age;

  void intro(); // 원형 선언
};

void SSSHuman::intro() // 본체 정의
{
  printf("이름 = %s, 나이 = %d\n", name, age);
}
// ================================================================

int main() {
  SHuman kim1 = {"김일형", 29};
  IntroHuman(kim1);

  SSHuman kim2 = {"김이형", 28};
  kim2.intro();

  SSSHuman kim3 = {"김삼형", 27};
  kim3.intro();
}
