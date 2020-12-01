#include<stdio.h>
#include<stdlib.h>
/******************** This is self refrential structure for node of doubly linked list  ********************/
struct node{
    struct node *prev;
    int data;
    struct node *next;
};
/******************** This function is used to insert node in empty doubly linked list  ********************/
struct node *addToEmpty(struct node *head, int data){
    head = malloc(sizeof(struct node));
    head->next = NULL;
    head->data = data;
    head->prev = NULL;
    return head;
}


/******************** This function is used to insert node at end of doubly linked list  ********************/
struct node *addToEnd(struct node *head, int data){
    struct node *temp = malloc(sizeof(struct node));
    struct node *temp2 = head;
    temp->next = NULL;
    temp->data = data;
    temp->prev = NULL;
    while(temp2->next != NULL){
        temp2 = temp2->next;
    }
    temp2->next = temp;
    temp->prev = temp2;
    return head;
}
struct node *createList(struct node *head){
    int n, data, i;
/******************** Here we are asking user number of elements want to insert in empty doubly linked list  ********************/
    printf("Please Enter Number of elements you want in list:");
    scanf("%d", &n);
/******************** Here we are checking user enter number of elements want to insert in empty doubly linked list  ********************/
    if(n == 0){
        return head;
    }
    printf("Please Enter 1st element you want in list:");
    scanf("%d", &data);
    head = addToEmpty(head, data);
    for(i = 1; i<n; i++){
    printf("Please Enter element you want at position:%d", i+1);
    scanf("%d", &data);
    head = addToEnd(head, data);  
    }
    return head;
}
int main(){
    
    struct node *head = NULL;
    struct node *ptr;
    head = createList(head);
    ptr = head;
/******************** Here we are trying to print data of doubly linked list  ********************/
    while(ptr != NULL){
    printf("%d \n", ptr->data);
    ptr = ptr->next;
    }

    return 0;
}