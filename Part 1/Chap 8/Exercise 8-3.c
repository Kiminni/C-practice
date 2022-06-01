#include <stdio.h>

int main(void)
{
    int score;
    scanf("%d",&score);

    switch(score)
    {   /*
        case 100:
        case 99:
        case 98:
        case 97:
        case 96:
        case 95:
        case 94:
        case 93:
        case 92:
        case 91:
        case 90:
            printf("A");
            break;

        case 89:
        case 88:
        case 87:
        case 86:
        case 85:
        case 84:
        case 83:
        case 82:
        case 81:
        case 80:
            printf("B");
            break;
        default:
            printf("F");
            */
        score = score/10;
        case 10:
        case 9:
            printf("A");
        case 8:
            printf("B");
        default:   
            printf("F");
 
    }

    return 0;
}