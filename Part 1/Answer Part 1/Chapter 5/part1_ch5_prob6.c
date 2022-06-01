#include <stdio.h>

int main() {
	double year=0;
	double life=0;
	double life_normal=100;
	double cigar=0;

	printf("흡연 기간?(단위 : 년) : ");
	scanf("%lf", &year);

	printf("하루에 몇 개피 핌? : ");
	scanf("%lf", &cigar);
	
	life = life_normal - 0.0014 * cigar * 365 * year; //몇 개피 * 365 * 년 * 0.0014가 하루에 2분이 담당하는 시간임?
	printf("기대 수명 (평균=100세) : %.4lf 세 \n", life);

	return 0;
}

/*

문제에서는 담배 한 개피에 대한 힌트만 있으므로,
흡연기간뿐만 아니라 하루에 몇개피를 피는 지도 물어봅니다.
이를 통해 수명을 계산하고 출력합니다.
%.4lf에서 .4를 붙인 것은 소수점이하로 4자리까지만 출력하기 위함입니다.

아래는 참고할 수 있는 또 다른 답입니다.

#include <stdio.h>

int main(void)
{
	int cigarette;
	int day, year, total, time, daytime, result;
	int rest, restmonth, restday;

	printf("수명은 100살까지이고 20살부터 20년동안 담배를\n");
	printf("하루에 담배 한갑을 핀다고 가정하였을때\n\n");
 
	cigarette = 2; //한가치에 2분
	day = cigarette *20; //하루에 한갑
	year = day *365; //365일 핀 담배량
	total = year * 20; //20년동안 핀 담배량

	printf("단축된 수명 분량 : %d분\n", total);
	time = total/60;
	printf("단축된 수명 시간량 : %d시간 \n", time);
	daytime = time/24;
	printf("단축된 수명 일 : %d일\n", daytime);
 
	rest = 365-daytime;
	printf("살수 있는 수명 : 99살 %d일\n", rest);
	restmonth = rest/30;
	restday = rest%30;
	printf("살수 있는 수명 : 99살 %d달 %d일\n\n", restmonth, restday);
	return 0;
}

*/