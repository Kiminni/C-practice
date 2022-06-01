#include<stdio.h>

int main() {
	int i; //for 문에서 사용할 부분
	char source[3]={'A','B','C'}; //원본 배열
	char target[6]; //복사할 대상이 되는 배열
	
	for(i=0;i<3;i++) { //0~2까지 프린트및 복사
		target[i]=source[i];
		printf("%c",source[i]);
	}
	printf("\n");
	
	for(i=0;i<3;i++) //3~5까지 복사
		target[5-i]=source[i];

	for(i=0;i<6;i++) //프린트
		printf("%c",target[i]);

	printf("\n");
	return 0;
}

/*

배열에 대해 이해하고 있는 지 묻는 문제입니다.
3개의 원소를 가진 배열과 6개의 원소를 가진 배열을 만들고
배열에 있는 값을 다른 배열에 옮겨보는 것이 문제의 핵심입니다.
배열의 인덱스가 어떤 의미를 가지는 지도 알아야 하며
이 해답에서는 먼저 0~2까지, 즉 source의 3개의 원소를 모두
출력하면서 target에 복사를 하였고
5-i를 이용하여 역순으로 복사를 하였습니다.

*/