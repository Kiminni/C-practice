#include <stdio.h>
void print(void);
int addrevise_pos(void);
void print_pos(void);

struct things
{
    int num; //0은 전체 개수
    int price; //0은 총 금액, 나머지 각 항목의 원래 금액 * 개수
    char name[20]; //0번은 물품 가지 수
    int value; // 원래 금액
};

struct things mart[101]  = {0,};

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
            printf("총 %d개, %d원 \n",mart[0].num,mart[0].price);

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

int addrevise_pos()
{   
    int revise_num = 0;
    int num1 = 0;

    
    
    printf("1. 새 물품 추가 2. 구매 물품 수정 \n");

    scanf("%d",&revise_num);
    if (revise_num > 3 || revise_num < 0)
        printf("초기 화면으로 돌아갑니다.");

    while(revise_num > 0 && revise_num <3)
    {
        if(revise_num == 1 || revise_num == 2)
        {   
            printf("몇 번 항목에 추가 혹은 수정하시겠습니까? (1~100까지의 번호를 입력해주세요) \n");
            scanf("%d",&num1);
            
            if (revise_num == 2 && mart[num1].num == 0)
                printf("빈 항목이므로 새로 작성합니다.");
            
            else if(revise_num == 1 && mart[num1].num != 0)
                printf("이미 있는 항목이므로 수정 합니다. \n");

            printf("항목의 이름은 무엇입니까? \n");
            scanf("%s",&mart[num1].name);
           
            printf("물품의 가격은 얼마입니까?\n");
            scanf("%d",&mart[num1].value);
            
            printf("몇 개의 물품을 넣으시겠습니까? \n");
            scanf("%d",&mart[num1].num);

            mart[num1].price = mart[num1].num * mart[num1].value;
            printf("이름: %s, 개당 가격: %d, 개수: %d, 총 금액: %d \n",mart[num1].name,mart[num1].value,mart[num1].num,mart[num1].price);

            mart[0].num += mart[num1].num;
            mart[0].price += mart[num1].price;
        }
        else 
           printf("초기 화면으로 돌아갑니다.");
         
        printf("계속 하시려면 1번 혹은 2번을 누르고 추가로 물품을 적어주세요. \n");
        printf("그 외 버튼을 누르면 초기 화면으로 돌아갑니다. \n");
        scanf("%d",&revise_num);
    }
    
}

void print_pos()
{
    for(int i = 1; i<101; i++)
        if(mart[i].value != 0)
            printf("이름: %s, 개당 가격: %d, 개수: %d, 총 금액: %d \n",mart[i].name,mart[i].value,mart[i].num,mart[i].price);
    
}