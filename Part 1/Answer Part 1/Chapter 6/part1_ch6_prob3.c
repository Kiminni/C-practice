#include <stdio.h>
int main()
{
	int i;
	float f;
	double d;

	i=(long)('a'+1.3); 
	f=2.49+i;		   
	d=(double)f*i; 

	// 데이터 손실 여부를 확인하기 위해 출력해 봅니다.
	printf("%d \n", i);
	printf("%lf \n", f);
	printf("%lf \n", d);
}

/*
	i - int -> long 98.3 손실 o
	f -> float int + double -> float 손실 o
	d -> (double) f*i => int * float 
	'a'는 아스키코드에 따라 정수 97로 다루어지기 때문에 'a'+1.3은 98.3으로 계산됩니다.
	하지만 이를 long 형으로 강제 형변환하면서 실수부가 손실되어 i는 98이 됩니다. 
	정수인 i에 2.49를 더하면 손실을 최소화하는 방향으로 100.49의 double형으로 자동 형변환이 되며
	f는 float이기 때문에 더 작은 자료형으로 형변환이되면서 실수부에서 약간의 손실이 발생합니다.
	float 형인 f를 double로 강제 형변환 할때에는 손실이 발생하지 않지만 정수형인 i와 곱하면 손실이 일어나게 됩니다. //???? 
*/