#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * link;
};
int main(){
    int count = 0;
    struct node * head = malloc(sizeof(struct node));
    struct node *ptr;
    head->link = NULL;
    head->data = 25;
    ptr = head;
    while(ptr != NULL){
        printf("%d \n", ptr->data);
        count++;
        ptr = ptr->link;
    }
    printf("%d", count);


    return 0;
}