#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node * prev;
    int data;
    struct node * next;
};
struct node *addToEmpty(struct node *head){
    /**********  Here we are trying to create node and assign data also update link parts  **********/
    head = malloc(sizeof(struct node));
    head->prev = NULL;
    head->data = 25;
    head->next = NULL;
}

struct node *InsertToEnd(struct node *head, int data){
    /**********  Here we are trying to create node and insert in the end of list also update link parts  **********/
    struct node *temp = malloc(sizeof(struct node));
    struct node *temp2 = head;
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    while(temp2->next != NULL){
         temp2 = temp2->next;
    }
    temp2->next = temp;
    temp->prev = temp2;
    return head;
}

struct node *InsertAtBeg(struct node *head, int data){
    /**********  Here we are trying to create node and insert in the Begining of list also update link parts  **********/
    struct node *temp = malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;

    temp->next = head;
    head->prev = temp;
    head = temp;
    return head;
}

int main(){
    int count = 0;
    struct node * head;
    struct node * ptr; 
    head = addToEmpty(head);
    head = InsertToEnd(head, 43);
    head = InsertAtBeg(head, 51);

    /**********  Here we are trying to print data and also counting element of list  **********/
    ptr = head;
    while(ptr != NULL){
        printf("%d \n", ptr->data);
        count++;
        ptr = ptr->next;
    }
    printf("%d", count);


    return 0;
}