#include <stdio.h>

// 태그를 하나의 타입으로 인정하기 때문에 태그명으로 변수를 선언할 수 있습니다.

int main() {
  // C는 반드시 태그앞에 enum, struct 키워드를 붙입니다.
  enum origin { EAST, WEST, SOUTH, NORTH };
  enum origin mark = WEST;
  mark = EAST;

  printf("%d 방향\n", mark);

  struct SHuman {
    char name[12];
    int age;
    double height;
  };
  struct SHuman kim = {"김상형", 29, 181.4};
  printf("이름 = %s, 나이 = %d\n", kim.name, kim.age);
}
