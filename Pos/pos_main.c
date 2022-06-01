#include <stdio.h>
void print(void);
int addrevise_pos(void);
//int revise_pos(void);
void print_pos(void);

struct food
{
    int add_num[5]; //0은 전체 개수
    int add_price[5]; //0은 총 금액
};

struct food food_all = {0,};

int main()
{   
        
    int total = 0;
    int i = 0;

    while(i > -1 && i < 6)
    {
        print();
        scanf("%d",&i);

        if(i == 1 || i == 2)
            total = addrevise_pos();
        
        else if(i == 3)
            print_pos();

        else if(i == 4)
            printf("총 %d개, %d원 \n",food_all.add_num[0],food_all.add_price[0]);

    }

    return 0;
}

void print(void)

{
    printf("-------------------------- \n");
    printf("0. 메뉴 다시 출력. \n");
    printf("1. 새 주문 추가 \n");
    printf("2. 주문 수정 \n");
    printf("3. 현재 주문 조회 \n");
    printf("4. 주문 정산 \n");
    printf("5. 현재 총 매출액 \n");
    printf("------------------------- \n");
    printf("다른 숫자를 누르면 프로그램이 종료됩니다. \n");
}

/*
int add_pos()
{
    int j = 0, num = 0;
 
    printf("어떤 물품을 구매하시겠습니까? \n");
    printf("1. 토마토(5000원) 2. 치킨(15000원) 3. 피자(20000원) 4. 자바칩 프라푸치노(6000원) \n");
    printf("다른 번호를 누르면 초기 화면으로 돌아갑니다. \n");
    scanf("%d",&j);
  
    while((j > 0) && (j < 5)) 
    {   
       
        printf("몇 개 구매하시겠습니까?\n");
        scanf("%d",&num);
        
        if(j == 1)    
        {
            food_all.tomato += 5000 * num;
            printf("토마토를 %d 개 구매하셨습니다. 구매하신 금액은 %d원입니다. \n \n",num ,food_all.tomato);
            food_all.add_num[j] += num;
            food_all.add_num[0] += num;
            food_all.add_price[0] += food_all.tomato;
        }
        
        else if(j == 2)
        {
            food_all.chicken += 15000 * num;
            printf("치킨을 %d 개 구매하셨습니다. 구매하신 금액은 %d원입니다. \n \n",num ,food_all.chicken);
            food_all.add_num[j] += num;
            food_all.add_num[0] += num;
            food_all.add_price[0] += food_all.chicken;
        }

        else if(j == 3)
        {
            food_all.pizza += 20000 * num;
            printf("피자를 %d 개 구매하셨습니다. 구매하신 금액은 %d원입니다. \n \n",num ,food_all.pizza);
            food_all.add_num[j] += num;
            food_all.add_num[0] += num;
            food_all.add_price[0] += food_all.pizza;
        
        }

        else if(j == 4)
        {
            food_all.java += 6000 * num;
            printf("자바칩 프라푸치노를 %d 개 구매하셨습니다. 구매하신 금액은 %d원입니다. \n \n",num ,food_all.java);
            food_all.add_num[j] += num;
            food_all.add_num[0] += num;
            food_all.add_price[0] += food_all.java;
        }

        else
            printf("올바른 번호를 선택하십시오. \n");

        printf("구매하실 다른 물품을 선택해 주십시오. \n");
        printf("1. 토마토(5000원) 2. 치킨(15000원) 3. 피자(20000원) 4. 자바칩 프라푸치노(6000원) \n");
        printf("다른 번호를 누르면 초기 화면으로 돌아갑니다. \n");
        scanf("%d",&j);
            
        if(j > 5 || j < 1)        
        {   
            printf("토마토: %d개, %d원 \n",food_all.add_num[1],food_all.tomato);
            printf("치킨: %d마리, %d원 \n",food_all.add_num[2],food_all.chicken);
            printf("피자: %d판, %d원 \n",food_all.add_num[3],food_all.pizza);
            printf("자바칩 프라푸치노: %d잔, %d원 \n",food_all.add_num[4],food_all.java);
            printf("총 개수는 %d개, %d원입니다. 초기 화면으로 돌아갑니다. \n",food_all.add_num[0],food_all.add_price[0]);    
        }    
         
    }   

}
*/
int addrevise_pos()
{   
    int revise_num = 0;

    printf("구매하거나 수정하실 물품의 번호를 적어주십시오. \n");
    
    printf("1. 토마토(5000원) 2. 치킨(15000원) 3. 피자(20000원) 4. 자바칩 프라푸치노(6000원) \n");

    scanf("%d",&revise_num);
    if (revise_num > 5 || revise_num < 0)
        printf("초기 화면으로 돌아갑니다.");

    while(revise_num > 0 && revise_num <5)
    {
        if(revise_num == 1)
        {   
            if(food_all.add_num[1] != 0)
            {   
                printf("토마토의 현재 개수는 %d개, %d원입니다. 몇 개로 바꾸시겠습니까? \n",food_all.add_num[1],food_all.add_price[1]);
                scanf("%d",&food_all.add_num[1]);
                food_all.add_price[1] = 6000 * food_all.add_num[1];
                printf("수정된 개수는 %d개, %d원입니다. \n \n",food_all.add_num[1],food_all.add_price[1]);
            }
            else
            {
                printf("몇 개를 구매하시겠습니까? \n");
                scanf("%d",&food_all.add_num[1]);
                food_all.add_price[1] += 6000 * food_all.add_num[1];
                printf("구매 개수는 %d개 금액은 %d원 입니다. \n \n",food_all.add_num[1],food_all.add_price[1]);
            }
        }       

        else if(revise_num == 2)
        {
            if(food_all.add_num[2] != 0)
            {   
                printf("치킨의 현재 개수는 %d개, %d원입니다. 몇 개로 바꾸시겠습니까?  \n",food_all.add_num[2],food_all.add_price[2]);
                scanf("%d",&food_all.add_num[2]);
                food_all.add_price[2] = 20000 * food_all.add_num[2];
                printf("수정된 개수는 %d개, %d원입니다. \n \n",food_all.add_num[2],food_all.add_price[2]);
            }
            else
            {
                printf("몇 개를 구매하시겠습니까? \n");
                scanf("%d",&food_all.add_num[2]);
                food_all.add_price[2] += 20000 * food_all.add_num[2];
                printf("구매 개수는 %d개 금액은 %d원 입니다. \n \n",food_all.add_num[2],food_all.add_price[2]);
            }   
        }
       
        else if(revise_num == 3)
        {
           

            if(food_all.add_num[3] != 0)
            {   
                printf("피자의 현재 개수는 %d개, %d원입니다. 몇 개로 바꾸시겠습니까?  \n",food_all.add_num[3],food_all.add_price[3]);
                scanf("%d",&food_all.add_num[3]);
                food_all.add_price[3] = 20000 * food_all.add_num[3];
                printf("수정된 개수는 %d개, %d원입니다. \n \n",food_all.add_num[3],food_all.add_price[3]);
            }
            else
            {
                printf("몇 개를 구매하시겠습니까?  \n");
                scanf("%d",&food_all.add_num[3]);
                food_all.add_price[3] += 20000 * food_all.add_num[3];
                printf("구매 개수는 %d개 금액은 %d원 입니다. \n \n",food_all.add_num[3],food_all.add_price[3]);
            }
        }       
        
        else if(revise_num == 4)
        {
            if(food_all.add_num[4] != 0)
            {   
                printf("치킨의 현재 개수는 %d개, %d원입니다. 몇 개로 바꾸시겠습니까?  \n",food_all.add_num[4],food_all.add_price[4]);
                scanf("%d",&food_all.add_num[4]);
                food_all.add_price[4] = 6000 * food_all.add_num[2];
                printf("수정된 개수는 %d개, %d원입니다. \n \n",food_all.add_num[4],food_all.add_price[4]);
            }
            else
            {
                printf("몇 개를 구매하시겠습니까?  \n");
                scanf("%d",&food_all.add_num[4]);
                food_all.add_price[4] += 6000 * food_all.add_num[2];
                printf("구매 개수는 %d개 금액은 %d원 입니다. \n \n",food_all.add_num[4],food_all.add_price[4]);
            }   
        }    
        
        else 
           printf("초기 화면으로 돌아갑니다.");
         
        printf("물품을 추가로 구매하시려면 1. 토마토 2. 치킨 3. 피자 4. 자바칩 프라푸치노를 고르십시오. \n");
        printf("초기 화면으로 돌아가시려면 0번을 누르십시오. \n");
        scanf("%d",&revise_num);
    }
    for(int i = 1; i<5; i++)
    {
        food_all.add_num[0] += food_all.add_num[i];
        food_all.add_price[0] += food_all.add_price[i];
    }
}

void print_pos()
{
    printf("토마토: %d개, %d원 \n",food_all.add_num[1],food_all.add_price[1]);
    printf("치킨: %d개, %d원\n",food_all.add_num[2],food_all.add_price[2]);
    printf("피자: %d개, %d원\n",food_all.add_num[3],food_all.add_price[3]);
    printf("자바 칩 프라푸치노: %d개, %d원\n \n",food_all.add_num[4],food_all.add_price[4]);
}