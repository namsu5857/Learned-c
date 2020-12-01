#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

/********** function for deleting all nodes in already created a singly linked list.  **********/
struct node *reverseList(struct node *head){
    struct node * next = NULL;
    struct node * prev = NULL;
    while(head != NULL){
        next = head->link;
        head->link = prev;
        prev = head;
        head = next;
    }
    head = prev;
    return head;
}

/********** we have already created singly linked lists.  **********/
int main(){
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

    current = malloc(sizeof(struct node));
    current->link = NULL;
    current->data = 75;
    head->link->link->link->link = current;

    current = malloc(sizeof(struct node));
    current->link = NULL;
    current->data = 85;
    head->link->link->link->link->link = current;

    current = malloc(sizeof(struct node));
    current->link = NULL;
    current->data = 95;
    head->link->link->link->link->link->link = current;

/********** we are printing data of already created singly linked list.  **********/  
    ptr = head;
    printf("list we have to reverse \n");
    while(ptr != NULL){
        printf("%d \n", ptr->data);
        ptr = ptr->link;
    }
/********** we are deleting Entire already created singly linked list.  **********/
    head = reverseList(head);
/********** we are printing data of reversed singly linked list.  **********/  
    ptr = head;
    printf("Reversed linked list \n");
    while(ptr != NULL){
        printf("%d \n", ptr->data);
        ptr = ptr->link;
    }
    return 0;
}

