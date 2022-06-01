//
//  main.c
//  testProject
//
//  Created by Sung Tae Ryu on 12. 2. 26..
//  Copyright (c) 2012년 thinksquare. All rights reserved.
//
#include <stdio.h>
#include <string.h>


struct student_score
{
    int no;
    char name[10];
    float num1, num2, num3, total;
};

int main() { 
    int i;
    int search = 0;
    
    struct student_score s1[7] = {
        {1, "박지성", 90.2, 90.1, 88.8}, 
        {2, "이청용", 89.1, 88.5, 90.2}, 
        {3, "박주영", 92.1, 87.1, 90.1}, 
        {4, "기성용", 85.3, 86.2, 95.1}, 
        {5, "구자철", 88.2, 86.3, 91.1}, 
        {6, "지소연", 98.2, 90.1, 93.5}, 
        {7, "전가을", 93.3, 95.5, 91.2}
    };
    
    struct student_score str[7];
    
    FILE* fp1;
    FILE* fp2;
    
    fp1 = fopen("score.txt", "w");
    
    for(i=0; i<7; i++) {
        fprintf(fp1, "%d. %s %.1f %.1f %.1f \n", s1[i].no, s1[i].name, s1[i].num1, s1[i].num2, s1[i].num3);
    }
    
    fclose(fp1);
    
    fp1 = fopen("score.txt", "r");
    fp2 = fopen("score1.txt", "w");
    
    for(i=0; i<7; i++)
    {
        fscanf(fp1, "%d. %s %f %f %f ", &str[i].no, str[i].name, &str[i].num1, &str[i].num2, &str[i].num3);
        str[i].total=str[i].num1+str[i].num2+str[i].num3;
        fprintf(fp2, "%d. %s %.1f %.1f %.1f total : %.1f \n", str[i].no, str[i].name, str[i].num1, str[i].num2, str[i].num3, str[i].total);
    }
    
    fprintf(stdout, "input number : ");
    fscanf(stdin, "%d", &search);
    
    for(i=0; i<7; i++) {
        if(i+1 == search) {
            fprintf(stdout, "name : %s  total : %.1f \n", str[i].name, str[i].total);
        }
        else
            continue;
        
    }
    
    fseek(fp1,  0, SEEK_END);
    fprintf(stdout, "score size : %d byte \n", ftell(fp1));
    fclose(fp1);
    fclose(fp2);
    return 0;
}


/*

 먼저 파일을 따로 작성하지 않고 소스 코드에서 score.txt를 작성하여 다시 읽어드립니다.
 총점을 계산하고 이를 메모리 상에 저장해놓고 있으며, score1.txt를 만들어 총점까지 합친 결과를 저장합니다.
 이후 선수의 번호를 입력받아, 해당 선수의 총점과 이름이 검색되고 출력되며, score.txt의 총 파일 크기를 구하여 알려줍니다.
 여기서 주의할 점은 소수점 데이터의 활용입니다. 소수점 하나까지만 출력하기 위해 "%.1f"를 사용했지만, fscanf를 이용할 때는
 "%f"만을 사용한다는 점을 주의하세요.
 
*/