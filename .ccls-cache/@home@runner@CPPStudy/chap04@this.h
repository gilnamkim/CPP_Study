#include <stdio.h>

// 정적 멤버
//
// 객체의 고유한 상태를 저장하는 변수는 객체별로 따로 유지, 동작을 정의하는
// 함수는 공유한다. this 인수는 함수를 호출한 객체의 포인터이며 멤버를 참조하는
// 모든 문장앞에 this->를 생략한 것으로 간주한다. 이런 식으로 동작하는 호출
// 규약을 'thiscall'이라고 하며 모든 멤버함수에 강제로 적용된다.
class Simple {
private:
  int value;

public:
  Simple(int avalue) : value(avalue) {}
  void OutValue() { printf("value = %d\n", value); }
};

int main() {
  Simple A(1), B(2);
  A.OutValue();
  B.OutValue();
}