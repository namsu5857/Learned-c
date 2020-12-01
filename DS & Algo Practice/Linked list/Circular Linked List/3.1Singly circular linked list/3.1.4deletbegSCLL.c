#include<stdio.h>
#include<stdlib.h>
int size;
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
int getlength(){
    struct node * length = head;
    while(length->next != head){
        length = length->next;
        size++;
    }
    return size;
}
struct node * insertAtPose(){
    int pose = 0;
    int l = getlength();
    printf("Enter position wher you want to add new node");
    scanf("%d", &pose);
    if(pose == 0 || pose > l){
        printf("Invalid position");
    }
    else if(pose == 1){
        insertBeg();
    }
    else{
        int data; 
        struct node * position = head;
        struct node * newNode = malloc(sizeof(struct node));
        printf("Enter data for new node: ");
        scanf("%d", &data);
        newNode->data = data;
        newNode->next = NULL;  

        pose--; 
        while(pose != 1){
            position = position->next;
            pose--;    
        }
        newNode->next = position->next;
        position->next = newNode;
        
    }

}


struct node * deletbeg(){
    struct node * delete = head;
    struct node * tail = head;
    if(delete->next == delete){
        free(delete);
    }
    else{
        while(tail->next != head){
            tail = tail->next;
        }
        head = head->next;
        tail->next = head;
        free(delete);

    }
}
int main(){
    int count = 0;
    int choice;
    /**********  Here we are trying to create node and assign data also update link parts  **********/
    
    do{
        
        printf("Enter 1 for new node 2 for insert at begining 3 for specific position 4 for delete first node or 0 for Exit:");
        scanf("%d", &choice);
        switch(choice){
            case 0:
                break;
            case 1:
                creatSCLL();
                break;
            case 2:
                insertBeg();
                break;
            case 3:
                insertAtPose();
                break;
            case 4:
                deletbeg();
                break;
            default:
                printf("Invalid Entry \n");
                break;
        }

    }while(choice);

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