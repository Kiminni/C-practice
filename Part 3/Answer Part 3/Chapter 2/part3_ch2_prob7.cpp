#include <stdio.h>
#include <string.h>

struct student {
	char sID[32];
	char sName[32];
	int englishScore;
	int koreanScore;
};

int main () {

	struct student std;
	
	printf("Enter student ID : ");
	scanf("%s", std.sID);

	printf("Enter student name : ");
	scanf("%s", std.sName);
	
	printf("Enter student english score : ");
	scanf("%d", &std.englishScore);
	
	printf("Enter student korean score : ");
	scanf("%d", &std.koreanScore);
	
	if ( strstr(std.sID, "2010") != NULL) {
		printf("\nThis student enterred in 2010\n");
		printf("Student ID : %s\n", std.sID);
		printf("Student Name : %s\n", std.sName);
		printf("Student English Score : %d\n", std.englishScore);
		printf("Student Korean Score : %d\n", std.koreanScore);
	}
	
	return 0;
}
