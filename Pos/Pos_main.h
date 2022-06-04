void print(void);
int add_pos(void);
int change_pos(void);
void print_pos(void);
void all_pos(void);
void open_file(void);
void close_file(void);
void print_file(void);

struct things
{
    int num; //0은 전체 개수
    int price; //0은 총 금액, 나머지 각 항목의 원래 금액 * 개수
    char name[20]; //0번은 물품 가지 수
    int value; // 원래 금액
};