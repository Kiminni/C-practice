#include <stdio.h>

int main()
{   
    
    int num;
    int num_ex1=0, num_ex2 = 0, num_ex3 = 0, num_ex4 = 0;
    int num_all;

    printf("0000에서 1111까지 2진수 숫자를 입력:");
    scanf("%d",&num);

    num_ex1 = (num / 1000) * 8; // 1011 / 1000 -> 1 * 8 -> 8
    num_ex2 = ((num%1000)/100) *4; //1011%1000 -> 11/100 -> 0 
    num_ex3 = ((num%100)/10) *2; // 1011%100 -> 11/10 -> 1 * 2 -> 2
    num_ex4 = (num%10)*1; //1011%10 -> 1 -> 1
    num_all = num_ex1 + num_ex2 + num_ex3 + num_ex4;
    printf("%d %d %d %d",num_ex1,num_ex2,num_ex3,num_ex4);
    printf("2진수 %d의 10진수는 %d 입니다.",num,num_all);
    
    return 0;
 
}   
/*
int main() {
	int a;
	int result;
	int result1;
	int result2;
	int result3;
	int final;


	printf("0000과 1111사이의 2진수를 입력하시오 : ");
	scanf("%d", &a);
	
	result = (a / 1000) * 8;
	result1 = ((a % 1000) / 100) * 4;
	result2 = ((a % 100) / 10) * 2;
	result3 = (a % 10) * 1;

	final = result + result1 + result2 + result3;

	printf("이진수 %d를 10진수로 바꾸면 %d입니다.\n", a, final);

	return 0;
    */