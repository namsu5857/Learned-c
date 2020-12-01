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
struct node * insertBeg(){
    if(head == NULL){
        creatSCLL();
    }
    else{
        int data; 
        struct node * newNode = malloc(sizeof(struct node));
        printf("Enter data for new node: ");
        scanf("%d", &data);
        newNode->data = data;
        newNode->next = NULL;   

        newNode->next = temp->next;
        temp->next = newNode; 
        head = newNode;
    }

}
int main(){
    int count = 0;
    int choice;
    /**********  Here we are trying to create node and assign data also update link parts  **********/
    
    while(1){
        
        printf("Enter 1 for new node 2 for insert at begining or 0 for Exit:");
        scanf("%d", &choice);
        if(choice == 1){
            creatSCLL();
        }
        else if(choice == 2){
            insertBeg();
        }
        else{
            break;
        }

    }

    /**********  Here we are trying to print data and also counting element of list  **********/
    ptr = head;
    do{
        printf("%d \n", ptr->data);
        ptr = ptr->next;
        count++;
    }while(ptr != head);
    printf("Total Number of Nodes in list :%d \n", count);
    return 0;
}