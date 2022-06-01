#include <stdio.h>

struct student {
	char familyName[8];
	long point;
	struct student* left_link;
	struct student* right_link;
};

int main () {
	struct student stu1 = {"Kim", 90, NULL, NULL};
	struct student stu2 = {"Lee", 80, NULL, NULL};
	struct student stu3 = {"Goo", 60, NULL, NULL};
		
	stu1.left_link = &stu2;
	stu1.right_link = &stu3;
	
	printf("%s %s", stu1.left_link->familyName, stu1.right_link->familyName);
	return 0;
}