#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

int main(){
    int count = 0;
    struct node * head = malloc(sizeof(struct node));
    struct node *ptr;
    head->link = NULL;
    head->data = 25;
    
    struct node * next = malloc(sizeof(struct node));
    next->link = NULL;
    next->data = 45;
    head->link = next;

    struct node * next2 = malloc(sizeof(struct node));
    next2->link = NULL;
    next2->data = 55;
    next->link = next2;

    struct node * next3 = malloc(sizeof(struct node));
    next3->link = NULL;
    next3->data = 65;
    next2->link = next3;



    ptr = head;
    while(ptr != NULL){
        printf("%d \n", ptr->data);
        ptr = ptr->link;
        count++;
    }
    printf("%d", count);
    return 0;
}

