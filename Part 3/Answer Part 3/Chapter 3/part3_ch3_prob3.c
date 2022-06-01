//
//  main.c
//  testProject
//
//  Created by Sung Tae Ryu on 12. 2. 26..
//  Copyright (c) 2012년 thinksquare. All rights reserved.
//

#include <stdio.h>


int main()
{
    char array1[50];
    char array2[50];
    int i, j, w;
    FILE* fp1;
    FILE* fp2;
    
    char input;
    
    fp1 = fopen("source.txt", "r");
    fp2 = fopen("dest.txt", "w");
    
    for (i=0; i<50; i++) {
        array1[i] = 0;
        array2[i] = 0;
    }
    
    for(i=0; input != EOF; i++) {
        input = fgetc(fp1);
        
        array1[i] = input;
    }
    
    array1[i-1] = '\0';
    
    
    w = 0;
    
    for(j=0; j<i-1; j++) {
        if((j%5 == 0 && j >= 5)) {
            w += 10;
            
            if(i-2-j < 5) {
                w -= 4-(i-2-j);
            } 
            
            printf("-------------\n");
        }
        
        array2[j] = array1[4+w-j];
        printf("[%d/%d] <- %c\n", j, i-2, array1[4+w-j]);
    }
    
    printf("%s\n", array1);
    printf("%s", array2);
    
    fprintf(fp2, "%s", array2);
    
    fclose(fp1);
    fclose(fp2);
    return 0;
}


/*

 파일을 fgetc를 이용하여 파일의 끝에 도달할 때까지 읽고, array1에 저장합니다.
 파일에서 읽은 문자열을 사용하기 위해 마지막에 널문자를 넣어줍니다.
 이후 점화식에 따라 문자열을 5바이트마다 뒤집어 array2에 저장합니다.
 
*/