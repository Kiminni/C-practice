#include <stdio.h>

struct node
{
    int data;
    struct node* left_link;
    struct node* right_link;
};

int main()
{   /*
    struct node n1 = {10,NULL,NULL};
    struct node n2 = {20,NULL,NULL};
    struct node n3 = {30,NULL,NULL};
    struct node n4 = {40,NULL,NULL};
    struct node n5 = {50,NULL,NULL};
    struct node n6 = {60,NULL,NULL};
    struct node n7 = {70,NULL,NULL};

    n1.left_link = &n2;
    n1.right_link = &n3;
    n2.left_link = &n4;
    n2.right_link = &n5;
    n3.left_link = &n6;
    n3.right_link = &n7;
    printf("%d %d\n",n1.left_link->left_link->data,n1.right_link->right_link->data);
    */
    struct node n7 = {70, NULL, NULL};
	struct node n6 = {60, NULL, NULL};
	struct node n5 = {50, NULL, NULL};
	struct node n4 = {40, NULL, NULL};
	struct node n3 = {30, &n6, &n7};
	struct node n2 = {20, &n4, &n5};
	struct node n1 = {10, &n2, &n3};

    printf("%d %d\n",n1.left_link->left_link->data,n1.right_link->right_link->data);
    
    return 0;
}