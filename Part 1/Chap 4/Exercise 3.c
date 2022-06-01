#include <stdio.h>

int main(void)
{
   char lower,upper;
 
 
   lower = 97; //아스키코드 'a'
   upper = lower - 32; //아스키코드 'A'
   printf("%c\n",lower);
   printf("%c\n",upper); 
   printf("%s","alphabet - 32"); 
/*
   %c 작은 따옴표 여러 문자 -> 출력 안됨. 
   %c는 서식문자임 => lower, upper 같은 거면 되었겠으나 
   printf("%c",'alphabet - 32'); => alphabet - 32 이건 문자가 아니기 때문에 출력 할 수 없음. 출력하려면 %s.
   %c를 이용해 출력하고 싶다면, lower - 32, 혹은 upper 이용해야 a가 정상적 출력 가능.
*/
}