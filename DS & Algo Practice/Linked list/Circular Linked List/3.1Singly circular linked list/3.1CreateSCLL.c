#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
}* head, * temp, *ptr;
struct node * creatSCLL(){
    int data; 
    struct node * newNode = malloc(sizeof(struct node));
    printf("Enter data for new node: ");
    scanf("%d", &data);
    newNode->data = data;
    newNode->next = NULL;
    if(head == NULL){
        head = newNode;
        temp = newNode;
    } 
    else{
        temp->next = newNode;
        temp = newNode;
    }
    temp->next = head;
}
int main(){
    int count;
    int choice;
    /**********  Here we are trying to create node and assign data also update link parts  **********/
    
    do{
        creatSCLL();
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

    return 0;
}