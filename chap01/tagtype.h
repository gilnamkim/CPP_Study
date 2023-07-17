#include <stdio.h>

// 태그를 하나의 타입으로 인정하기 때문에 태그명으로 변수를 선언할 수 있습니다.

int main() {
  enum origin { EAST, WEST, SOUTH, NORTH };

  // C는 반드시 태그앞에 enum, struct 키워드를 붙입니다.
  enum origin mark = WEST;
  printf("%d 방향\n", mark);

  // C++은 태그명 자체를 타입으로 인정합니다.(생략가능)
  origin mark2 = EAST;
  printf("%d 방향\n", mark2);

  // 클래스도 하나의 타입으로 인정합니다.
  struct SHuman {
    char name[12];
    int age;
    double height;
  };

  struct SHuman kim = {"김상형", 29, 181.4};
  printf("이름 = %s, 나이 = %d\n", kim.name, kim.age);

  SHuman lee = {"이병헌", 53, 177.8};
  printf("이름 = %s, 나이 = %d\n", lee.name, lee.age);
}
