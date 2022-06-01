#include <stdio.h>


int main(void)
{
    int i,j;
  /*  /*for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf("*");
        }
        printf(" \n");
    }
    printf("\n");

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<i+1;j++)
            printf("*");
        
        printf(" \n");
    }

    for(int i = 0;i < 5;i++)
    {
        for(int j=5;j>i;j--)
            printf("*");
        
        printf(" \n");
    }
    printf("\n");


    for(i=0;i<5;i++)
    {
        for(j=0;j<i+1;j++) //i=0 -> j=0 i=1 -> j=0,1 .... i=4 ->j=0,1,2,3,4
            printf("*");

        printf(" \n");
    }
    printf("\n");


    for(i=0;i<5;i++)
    {
        for(j=5;j>i;j--)
            printf("*");
        printf(" \n");
    }
    printf("\n");*/


   /* for(i = 0;i < 5;i++) //5줄 만들기
    {
        
        for(j = 0;j < i;j++) // 초반에 만들 공백
            printf(" ");
        
        for(; j< 9- i; j++) //별 개수 표시
            printf("*");
    printf("\n");
    }

    printf("\n");
*/
  /* for(i=0;i<5;i++)
    {
        for(j=1;j<5-i;j++)
            printf(" ");
        for(j=0;j<2*i+1;j++)
            printf("*");
    printf("\n");
    }

   for(i = 0;i < 5;i++) //5줄 만들기
    {
        for(j = 0;j < i;j++) // 초반에 만들 공백
            printf(" ");
        
        for(; j<9-i; j++) //별 개수 표시
            printf("*");
        
    printf("\n");
    }

    */
/*
    for(i=0;i<5;i++)
    {
    for(j=0;j<i+1;j++)
        printf("*");
    printf(" ");    

    printf("\n");

    
    }

    for(i=0;i<5;i++)
    {
    for(j=0;j<5-i;j++)
        printf("*");
    printf(" ");    

    printf("\n");
    }


    for(i=0;i<5;i++)
    {
        for(j=1;j<5-i;j++)
            printf(" ");
        for(j=0;j<2*i+1;j++)
        printf("*");   
    printf("\n");               
    }

    for(i=0;i<5;i++)
    {
        for(j=0;j<i;j++) //공백 표시 
            printf(" ");
            /*
            1 -> 9칸(공백 0) j=0 -> i=0
            2 -> 7칸(공백 1) j=0 -> i=1 -> 0 (1칸)
            3 -> 5칸(공백 2) j=0 -> i=2 -> 0,1 (2칸)
            4 -> 3칸(공백 3) j=0 -> i=3 -> 9,1,2 (3칸)
            5 -> 1칸(공백 4) j=0 -> i=4 -> 0,1,2,3 (4칸)
            */
/*
        for(;j<9-i;j++)
            printf("*");
        /*
        초기값 없이 반복(윗 값 그대로 이용)
        
    printf("\n");
    }   
*/
    for(i=0;i<5;i++)
    {
        for(j=0;j<i+1;j++)
            printf("*");
        printf("\n");
    }

    for(i=0;i<5;i++)
    {
        for(j=5;j>i;j--)
            printf("*");
        printf("\n");   
    }
    
    for(i=0;i<5;i++)
    {
        for(j=1;j<i+1;j++)
            printf(" ");

        for(;j<8-i;j++)
            printf("*");

        printf("\n");
    }

    for(i=0;i<5;i++)
    {
        for(j=5;j>i;j--)
            printf(" ");
        for(j=0;j<2*i+1;j++)
            printf("*");
        printf("\n");
    }































}

