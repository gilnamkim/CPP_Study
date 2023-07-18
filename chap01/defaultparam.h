#include <stdio.h>

// 디폴트 파라미터
//
// GetSum함수의 3번째 파라미터 값이 없다면 int step = 1의 기본값이 파라미터로
// 들어가 함수를 수행한다
// 4번째 파라미터도 같은의미
// 단, 첫번째와 두번째 파라미터는 반드시 넘겨줘야한다.

int GetSum(int from, int to, int step = 1, int base = 0);

int main() {
  printf("%d\n", GetSum(1, 10)); // 1 ~ 10 까지 합
  printf("%d\n", GetSum(1, 10, 2)); // 1, 3, 5, 7, 9 의 합 for문의 증감식이 2씩 증가합니다
  printf("%d\n", GetSum(1, 10, 2, 10)); // 10에 1, 3, 5, 7, 9 의 합을 더합니다
}

int GetSum(int from, int to, int step /* = 1*/, int base /* = 0*/) {
  int sum = base;
  for (int i = from; i <= to; i += step) {
    sum += i;
  }
  return sum;
}
