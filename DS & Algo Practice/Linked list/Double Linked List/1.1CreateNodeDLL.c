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
int main(){
    int count = 0;
    struct node * head;
    struct node * ptr; 
    head = addToEmpty(head);

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