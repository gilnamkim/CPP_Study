#include <stdio.h>

// 멤버 초기화 리스트
//
// 함수 정의문과 본체 사이에 :을 찍고 "멤버:초기값"의 목록을 ','로 구분하여 나열한다.
// 상수는 반드시 초기화 리스트에서 초기값을 주어야 하며 생성자 본체에서 대입할 수 없다.
// 초기화 리스트는 객체가 생성되기 이전에 할당과 동시에 값을 대입할 수 있는 영역이다.
// 레퍼런스도 초기화 리스트에서만 초기화 할 수 있다.
// 포함 객체나 상속받은 객체로 초기화 리스트를 사용한다.
class Some {
public:
  const int total1;
  int &total2;
  Some(int atotal, int &btotal) : total1(atotal), total2(btotal) {}

  void OutTotal() { printf("%d : %d\n", total1, total2); }
};

int main() {
  int val1 = 8;
  int val2 = 2;
  Some S(val1, val2);
  S.OutTotal();
}
