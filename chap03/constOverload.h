#include <stdio.h>

// 생성자 오버로딩
//
// 생성자도 함수의 일종이며 파라미터의 수에 따라 오버로딩할 수 있다.
class Time
{
private:
	int hour, min, sec;

public:
	// 생성자1
	Time(int h, int m, int s) {
		hour = h;
		min = m;
		sec = s;
	}

	// 생성자 2
	Time(int abssec) {
		hour = abssec / 3600;
		min = (abssec / 60) % 60;
		sec = abssec % 60;
	}

	void OutTime() {
		printf("현재 시간은 %d:%d:%d입니다.\n", hour, min, sec);
	}
};

int main()
{
	Time now(12, 30, 40);
	now.OutTime();
	Time noon(44000);
	noon.OutTime();
}