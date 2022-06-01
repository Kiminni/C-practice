#include <stdio.h>

struct point
{
	unsigned int num;
	char bloodtype[2];
	double optical1, optical2;
	int weight;
};

int main ()
{
	struct point array[5];
	int i;

	for (i=0;i<5;i++)
	{
		printf("학번: ");
		scanf("%u", &array[i].num);
		printf("혈액형: ");
		scanf("%s", &array[i].bloodtype);
		printf("시력: ");
		scanf("%lf %lf", &array[i].optical1, &array[i].optical2);
		printf("몸무게: ");
		scanf("%d", &array[i].weight);
	}

	printf("\n\n");

	for (i=0;i<5;i++)
	{
		printf("학번: %u\n혈액형: %s\n시력: %.1lf, %.1lf\n몸무게: %d\n\n", array[i].num, &array[i].bloodtype, array[i].optical1, array[i].optical2, array[i].weight);
	}

	return 0;


}


/*

1번 문제의 구조체를 이용하여 실제로 해당 구조체에 데이터를 넣고
그것을 출력하는 문제입니다.
5명의 정보를 입력받기 위해 for문을 이용하고
마찬가지로 정보의 입력이 끝난뒤에 for문을 다시 사용하여 입력받은 정보를
출력해줍니다.

*/
