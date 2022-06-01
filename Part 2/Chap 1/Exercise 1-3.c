#include <stdio.h>

int main(void)
{   
   /* int array1[5] = {90,78,77,98,98};
    int array2[5] = {80,45,67,88,57};
    int array3[5] = {88,99,65,55,74};
    int total1 = 0, total2 = 0, total3 = 0, total4 = 0, total_full = 0;

    for(int i = 0; i < 5; i++)
    {
        total1 += array1[i];
        total2 += array2[i];
        total3 += array3[i] ;
    }
    
    for(int j = 0;j < 3;j++)
    {
        total4 = array1[j]+array2[j]+array3[j];
        total_full += total4;
    }
    total_full = total1 + total2 + total3;
    printf("%d %d %d %d %d ",total1, total2, total3, total4,total_full);
*/
    int arr[15] =  {
                   90,78,77,98,98,
                   80,45,67,88,57,
                   88,99,65,55,74
                   };

    int hor[3] = {0};
    int ver[5] = {0};
    int i = 0, totalsum = 0;

    for(i = 0;i < 15; i++)
    {
        hor[i/5] += arr[i];
		ver[i%5] += arr[i];
		totalsum += arr[i];
    }

    for(i=0; i<3;i++)
        printf("%d\n",hor[i]);

    for(i=0;i<5;i++)
        printf("%d\n",ver[i]);

    printf("%d\n",totalsum);





}