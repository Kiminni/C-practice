#include <stdio.h>
#define POUND 0.45


int main() {
	int wheat = 150;
	int result;

	result = wheat * POUND;

	printf("밀가루 %d 파운드는 %d kg입니다. \n", wheat, result);

	return 0;
}

/*

1파운드에 대한 kg 값정을 상수로 미리 의해두고
이를 계산하여 출력합니다.

*/