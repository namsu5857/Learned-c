#include<stdio.h>
#include<stdlib.h>
int l;
int size = 0;
    /**********  Here we are declare a data type for making DCLL nodes  **********/
struct node{
    int data;
    struct node * next;
    struct node * prev;
}* head, * temp, *ptr;


    /**********  Here we are create DCLL  **********/
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

    /**********  Here we are trying to insert a new node in already created DCLL at begining  **********/
struct node * insertBeg(){
    if(head == NULL){
        creatDCLL();
    }
    else{
        int data; 
        struct node * newNode = malloc(sizeof(struct node));
        printf("Enter data for new node: ");
        scanf("%d", &data);
        newNode->data = data;
        newNode->next = NULL;
        newNode->prev = NULL;   

        temp->next->prev = newNode;
        newNode->next = temp->next;
        newNode->prev = temp;
        temp->next = newNode; 
        head = newNode;
    }

}

    /**********  Here we are trying to insert a new node in a specific position of DCLL  **********/
struct node * insertPos(){
    int pos;
    printf("Enter position at you want to insert new Node:");
    scanf("%d", &pos);
    if(pos == 0 || pos >= l){
        printf("Invalid Position");
    }
    else{

    
        struct node * position = head;
        if(head == NULL){
            creatDCLL();
        }
        else{
            int data; 
            struct node * newNode = malloc(sizeof(struct node));
            printf("Enter data for new node: ");
            scanf("%d", &data);
            newNode->data = data;
            newNode->next = NULL;
            newNode->prev = NULL;
            
            if(pos == 1){
                insertBeg();
            }
            else{
                pos--;
                while(pos != 1){
                    position = position->next;
                    pos--;
                }
                position->next->prev = newNode;
                newNode->next = position->next;
                newNode->prev = position;
                position->next = newNode;
            }

        }
    }

}


struct node * deletebeg(){
    struct node * delet = head;
    struct node * tail = head;
    if(delet->next == delet){
        free(delet);
    }
    else{
        while(tail->next != head){
            tail = tail->next;
        }
        head = head->next;
        tail->next = head;
        head->prev = tail;
        free(delet); 

    }

}
    /**********  Here we are trying to counting elements of DCL list  **********/
int getlength(){
    struct node *length = head;
    do{
        length = length->next;
        size++;
    }while(length->next != head);
    return size;
}

int main(){
    int count = 0;
    int choice;
    
    do{
            /**********  Here we are asking user what he want to do  **********/
        printf("Enter 1 for creating list\n 2 for insert at begining\n or 3 for insert at end\n 4 for specific position\n and 5 for deleting first node\n 0 for Exit:");
        scanf("%d", &choice);
        switch(choice){
            case 0:
                break;
            case 1:
                creatDCLL();
                break;
            case 2:
                insertBeg();
                break;
            case 3:
                creatDCLL(); 
                break;
            case 4:
                insertPos();
                break;
            case 5:
                deletebeg();
                break;
            default:
                printf("Invalid choice \n");
                break;  

        }
        l = getlength();

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