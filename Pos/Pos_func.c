#include <stdio.h>
#include "Pos_main.h"

FILE* fp;

struct things mart[101]  = {0,};

int all_num = 0;
int all_price = 0;

void print(void)
{
    printf("-------------------------- \n");
    printf("0. 메뉴 다시 출력. \n");
    printf("1. 새 주문 추가 \n");
    printf("2. 주문 수정 \n");
    printf("3. 현재 주문 조회 \n");
    printf("4. 주문 정산 \n");
    printf("5. 파일에 저장(프로그램이 종료됩니다!) \n");
    printf("------------------------- \n");
    printf("다른 숫자를 누르면 프로그램이 종료됩니다. \n");
}

int add_pos()
{   
    int revise_num = 0;
    int num1 = 0;

    while(revise_num == 0)
    {
        if(revise_num == 0)
        {   
            printf("몇 번 항목에 추가 하시겠습니까? (1~100까지의 번호를 입력해주세요) \n");
            scanf("%d",&num1);

            if(mart[num1].num != 0)
            {
                printf("이미 추가된 항목이므로 추가 할 수 없습니다! 다른 번호를 골라주세요. \n");
                continue;        
            }
            printf("항목의 이름은 무엇입니까? \n");
            scanf("%s",&mart[num1].name);
           
            printf("물품의 가격은 얼마입니까?\n");
            scanf("%d",&mart[num1].value);
            
            printf("몇 개의 물품을 넣으시겠습니까? \n");
            scanf("%d",&mart[num1].num);

            mart[num1].price = mart[num1].num * mart[num1].value;
            printf("이름: %s, 개당 가격: %d, 개수: %d, 총 금액: %d \n",mart[num1].name,mart[num1].value,mart[num1].num,mart[num1].price);

            all_num += mart[num1].num;
            all_price += mart[num1].price;
        }
        else 
           printf("초기 화면으로 돌아갑니다.");
         
        printf("계속 하시려면 0번을 누르고 추가로 물품을 적어주세요. \n");
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

int change_pos()
{
    int num;
    int change_num = 0;
    
    while(change_num == 0)
    {
        printf("몇 번 항목을 수정 하시겠습니까? (비어있는 항목은 수정이 되지 않습니다!)\n");
        scanf("%d",&num);

        if(mart[num].num == 0)
        {   
            printf("빈 항목이므로 수정 할 수 없습니다! 다른 번호를 골라주세요. \n");
            continue;        
        }
        all_num -= mart[num].num;
        all_price -= mart[num].price;

        printf("항목의 이름은 무엇입니까? \n");
        scanf("%s",&mart[num].name);
           
        printf("물품의 가격은 얼마입니까?\n");
        scanf("%d",&mart[num].value);
            
        printf("몇 개의 물품을 넣으시겠습니까? \n");
        scanf("%d",&mart[num].num);

        mart[num].price = mart[num].num * mart[num].value;
        
        all_num += mart[num].num;
        all_price += mart[num].price;
        printf("이름: %s, 개당 가격: %d, 개수: %d, 총 금액: %d \n",mart[num].name,mart[num].value,mart[num].num,mart[num].price);
        
        printf("계속 하고 싶다면 0번을 누르세요. 다른 번호를 누르면 초기화면으로 돌아갑니다.\n");
        scanf("%d",&change_num);
    }
}

void all_pos(void)
{
    printf("총 %d개, %d원 \n \n",all_num,all_price);
}

void print_file(void)

{   fp = fopen("reciept.txt","at+");
    for(int i = 1; i<101; i++)
        if(mart[i].value != 0)
            fprintf(fp,"%d번 이름: %s, 개당 가격: %d, 개수: %d, 총 금액: %d \n",mart[i].num, mart[i].name,mart[i].value,mart[i].num,mart[i].price);
    fprintf(fp,"총 %d개, %d원 \n",all_num,all_price);
    
    printf("정상적으로 출력되었습니다.\n");
    printf("프로그램이 종료됩니다.\n");
    fprintf(fp,"정상적으로 출력되었습니다.\n");
    fclose(fp);
}
