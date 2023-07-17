#include <iostream>
using namespace std;

// IO Stream
// C언어의 기본입출력 printf, scanf 대신 객체 지향적은 cin,cout을 사용합니다.
//
// 장점
// 1. 직관적
// 2. 타입을 자동으로 판별하여 서식이 필요없다.
// 3. 사용자 정의 타입에 대해서도 기능 확장이 가능

int main() {
  // 출력
  cout << "First C++ Program"
       << endl; // cout << 데이터 << 데이터.... << endl; (줄바꿈)

  // 자료형을 자동으로 판별하며 쭉 이어서 보내면 된다.
  int i = 56;
  char ch = 'S';
  double d = 2.414;

  cout << i << ch << d << endl;

  // 입력
  int age;
  cout << "나이를 입력하시오 : ";
  cin >> age; // cin >> 변수
  cout << "당신은 " << age << "살입니다." << endl;
}