#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

/********** function for deleting begining node in already created a singly linked list.  **********/
struct node *deletefirstNode(struct node *head){
    struct node * temp = head;

    head = head->link;
    free(temp);
    temp = NULL;
    return head;
}

/********** function for deleting last node in already created a singly linked list.  **********/
struct node *deletelastNode(struct node *head){
    struct node * temp = head;
    struct node * temp1;
    while(temp->link->link != NULL)
            temp = temp->link;
    temp1 = temp->link;
    free(temp1);
    temp1 = NULL;
    return head;
}

/********** function for deleting last node in already created a singly linked list.  **********/
struct node *deletecertNode(struct node *head, int pose){
    struct node * next = head;
    struct node * prev = head;
    while(pose != 1){
        prev = next;
        next = next->link;
        pose--;
            
    }
    prev->link = next->link;
    free(next);
    next = NULL;
    return head;
}

/********** we have already created singly linked lists.  **********/
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

/********** we are delete first node in already created singly linked list.  **********/
    head = deletefirstNode(head);

/********** we are delete last node in already created singly linked list.  **********/
    head = deletelastNode(head);

/********** we are delete certain position node in already created singly linked list.  **********/
    int pose = 4;
    head = deletecertNode(head, pose);

    ptr = head;
    while(ptr != NULL){
        printf("%d \n", ptr->data);
        ptr = ptr->link;
        count++;
    }
    printf("%d", count);
    return 0;
}

