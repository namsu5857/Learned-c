/***************               Whetting Your Apitite               ***************/
/***************             Data Structure and Algorithm          ***************/
/***************                    Chapter No.3                   ***************/
/***************                    Linked Lists                   ***************/


/***************                 Single Linked List                ***************/
/***************             Creating Single linked lis            ***************/
#include <stdio.h> 
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
int main(){
    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));

    head->data = 45;
    head->link = NULL;

    struct node *current = NULL;
    current = (struct node *)malloc(sizeof(struct node));

    current->data = 98;
    current->link = NULL;
    head->link = current;

    current = malloc(sizeof(struct node));

    current->data = 4;
    current->link = NULL;

    head->link->link = current;


    printf("%d \n", head->data);
    printf("%d \n", head->link->data);
    printf("%d \n", head->link->link->data);
    return 0;

}
