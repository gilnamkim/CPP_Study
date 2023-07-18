#include <stdio.h>

// class(클래스)
//
// 클래스는 함수를 포함할 수 있는 구조체
// 구조체선언문 struct를 class로 바꾸면 클래스가 된다
// 구조체와의 다른점은 기본접근권한의 차이
// 클래스는 별도의 모듈을 만들어 사용할 수 있다

class Time
{
private:
	int hour, min, sec;

public:
	void SetTime(int h, int m, int s) {
		hour = h;
		min = m;
		sec = s;
	}
	void OutTime() {
		printf("현재 시간은 %d:%d:%d입니다.\n", hour, min, sec);
	}
};

int main()
{
	Time now;
	now.SetTime(12, 30, 40);
	now.OutTime();
}

