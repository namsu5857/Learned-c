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

/********** we are delete first node in already created singly linked list.  **********/
    head = deletefirstNode(head);

    ptr = head;
    while(ptr != NULL){
        printf("%d \n", ptr->data);
        ptr = ptr->link;
        count++;
    }
    printf("%d", count);
    return 0;
}

