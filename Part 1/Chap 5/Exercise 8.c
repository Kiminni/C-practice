#include <stdio.h>

int main()
{
    int hour,min, sec;
    int hour_c,min_c,sec_c,full;

    printf("what time is it?");
    scanf("%d",&hour);

    printf("what mm is it?");
    scanf("%d",&min);

    printf("what sec is it?");
    scanf("%d",&sec);

    hour_c = hour * 3600;
    min_c = min * 60;
    sec_c = sec;
    full = hour_c + min_c + sec_c;
    printf("%d",full);


}