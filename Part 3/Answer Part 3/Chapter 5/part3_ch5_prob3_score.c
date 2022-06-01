#include "part3_ch5_prob3_score.h"

void score(int *arr, int size){
	int i = 0;
	double sum = 0, avg = 0;
	char grade;

	for (;i < size; i++) 
		sum += arr[i];
	
	avg = sum/size;

	if (avg > 90) grade = 'A';
	else if (avg > 80) grade = 'B';
	else if (avg > 70) grade = 'C';
	else if (avg > 60) grade = 'D';
	else grade = 'E';

	printf("Æò±Õ : %.2lf ÇÐÁ¡ : %c\n", avg, grade);
}