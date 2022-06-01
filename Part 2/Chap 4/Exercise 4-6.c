#include <stdio.h>

int main()
{
    char *array1 = "ABCD"; //문자열 시작주소 저장
    char array2[] = "ABCD";

    //array1[0] = 'X'; //"ABCD = 상수"
    array2[0] = 'X';

    return 0;

}