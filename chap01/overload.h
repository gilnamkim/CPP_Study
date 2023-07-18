#include <stdio.h>

// 함수의 오버로딩
//
// 파라미터의 개수와 타입에 따라 다르게 정의 할 수 있다
// 단, 파라미터의 타입이 명확해야 한다.
//
// 규칙
// - 리턴 타입만 다른 경우 컴파일 오류가 발생합니다.
// - 형식이 동일한 static(정적) 함수를 오버로딩 할 수 없습니다.(컴파일오류)
// - 파라미터 형식이 배열 또는 포인터일 경우 오버로딩이 아닌 함수 재정의의 기능을 합니다

int Add(int a, int b);
int Add(int a, int b, int c);
double Add(double a, double b);

int main() {
  printf("1 + 2 = %d\n", Add(1, 2));
  printf("3 + 4 + 5 = %d\n", Add(3, 4, 5));
  printf("1.414 + 2.54 = %f\n", Add(1.414, 2.54));
}

int Add(int a, int b) { return a + b; }

int Add(int a, int b, int c) { return a + b + c; }

double Add(double a, double b) { return a + b; }
