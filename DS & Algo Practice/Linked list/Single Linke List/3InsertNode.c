#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};
struct node *inserNewNode(struct node *head,int data){
    struct node *temp = malloc(sizeof(struct node));
    temp->link = NULL;
    temp->data = data;

    temp->link = head;
    head = temp;
    return head;
}
/********** we have already a singly linked list.  **********/
int main(){
    int count = 0;
    struct node * head = malloc(sizeof(struct node));
    struct node *ptr;
    head->link = NULL;
    head->data = 25;
    
    struct node * current = malloc(sizeof(struct node));
    current->link = NULL;
    current->data = 45;
    head->link = current;

    current = malloc(sizeof(struct node));
    current->link = NULL;
    current->data = 55;
    head->link->link = current;

    current = malloc(sizeof(struct node));
    current->link = NULL;
    current->data = 65;
    head->link->link->link = current;
/********** we are inserting a new node in the begining to already created singly linked list.  **********/
    int data = 101;
    head = inserNewNode(head, data);
/********** we are printing data of singly linked list.  **********/
    ptr = head;
    while(ptr != NULL){
        printf("%d \n", ptr->data);
        ptr = ptr->link;
        count++;
    }
    printf("%d", count);
    return 0;
}

