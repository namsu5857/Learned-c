#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

/********** function for deleting all nodes in already created a singly linked list.  **********/
struct node *deleteallNode(struct node *head){
    struct node * next = head;
    while(head != NULL){
        next = next->link;
        free(head);
        head = next;
    }
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


/********** we are deleting Entire already created singly linked list.  **********/
    head = deleteallNode(head);

    ptr = head;
    if(ptr == NULL){
        printf("The single linked list has bee deleted successfully!");
    }
    else{
        printf("You have to improve your algorithm!");
    }
    return 0;
}

