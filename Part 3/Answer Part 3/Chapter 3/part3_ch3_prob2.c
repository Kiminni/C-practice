//
//  main.c
//  testProject
//
//  Created by Sung Tae Ryu on 12. 2. 26..
//  Copyright (c) 2012년 thinksquare. All rights reserved.
//
#include <stdio.h>

int main() { 
    int i, j, r;
    
    FILE* fp;
    
    fp = fopen("99.txt", "w");
    
    for (i=2; i<=9; i++) {
        fputc((char)(i+48), fp);
        fputs("단\n", fp);
        
        for (j=1; j<=9; j++) {
            fputc((i+48), fp);
            fputc('*', fp);
            fputc((j+48), fp);
            fputc('=', fp);
            
            r = i*j;
            
            fputc((((int)(r/10))+48), fp);
            fputc((r%10+48), fp);
            fputc('\n', fp);
        }
        fputc('\n', fp);
    }

    return 0;
}


/*
 
 fputc를 사용하게 되면 출력을 위해 ASCII코드 값을 계산하여 하나씩 출력해줘야하므로 많은 불편함이 있다.
 또한 decimal처리를 수동으로 해줘야하기 때문에 코드의 양이 많이 늘어나게 된다. fprintf의 경우에는
 %d와 같이 int형을 바로 사용할 수 있는 지시자를 사용할 수 있기 때문에 출력하는 것이 훨씬 간편하다. 
 
*/