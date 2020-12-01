#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node * prev;
    int data;
    struct node * next;
};
int main(){
    int count = 0;
    /**********  Here we are trying to create node and assign data also update link parts  **********/
    struct node * head = malloc(sizeof(struct node));
    struct node *ptr;
    head->prev = NULL;
    head->data = 25;
    head->next = NULL;

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