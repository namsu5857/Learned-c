#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};
/********** function for inserting a new node at begining in already created a singly linked list.  **********/
struct node *inserNewNodebeg(struct node *head,int data){
    struct node *temp = malloc(sizeof(struct node));
    temp->link = NULL;
    temp->data = data;

    temp->link = head;
    head = temp;
    return head;
}
/********** function for inserting a new node at end in already created a singly linked list.  **********/
struct node *inserNewNodeend(struct node *head,int data){
    struct node *temp = malloc(sizeof(struct node));
    struct node *temp2 = head;
    temp->link = NULL;
    temp->data = data;
    while(temp2->link != NULL){
        temp2 = temp2->link;
    }
    temp2->link = temp;
    return head;
}
/********** function for inserting a new node at certain position in already created a singly linked list.  **********/
struct node *inserNewNodepose(struct node *head,int data, int pose){
    struct node *temp = malloc(sizeof(struct node));
    struct node *temp2 = head;
    temp->link = NULL;
    temp->data = data;
    while(pose != 1){
        temp2 = temp2->link;
        pose--;
    }
    temp->link = temp2->link;
    temp2->link = temp;
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
    head = inserNewNodebeg(head, data);
/********** we are inserting a new node in the end to already created singly linked list.  **********/
    data = 98;
    head = inserNewNodeend(head, data);

/********** we are inserting a new node in the certain position to already created singly linked list.  **********/
    data = 60;
    int pose = 4;
    head = inserNewNodepose(head, data, pose);
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

