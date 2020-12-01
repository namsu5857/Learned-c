#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
    struct node * prev;
}* head, * temp, *ptr;
struct node * creatDCLL(){
    int data; 
    struct node * newNode = malloc(sizeof(struct node));
    printf("Enter data for new node: ");
    scanf("%d", &data);
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    if(head == NULL){
        head = newNode;
        temp = newNode;
        temp->prev = head;
    } 
    else{
        temp->next = newNode;
        newNode->prev = temp;
        temp = newNode;
    }
    temp->next = head;
}
int main(){
    int count = 0;
    int choice;
    /**********  Here we are trying to create node and assign data also update link parts  **********/
    
    do{
        creatDCLL();
        printf("Enter 1 for new node or 0 for Exit:");
        scanf("%d", &choice);

    }while(choice);

    /**********  Here we are trying to print data and also counting element of list  **********/
    ptr = head;
    do{
        printf("%d \n", ptr->data);
        ptr = ptr->next;
        count++;
    }while(ptr != head);
    printf("The Number of Nodes in list: %d", count);

    return 0;
}