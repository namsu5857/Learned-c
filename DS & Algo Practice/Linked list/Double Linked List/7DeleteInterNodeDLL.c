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

struct node *InsertToEnd(struct node *head, int data){
    /**********  Here we are trying to create node and insert in the end of list also update link parts  **********/
    struct node *temp = malloc(sizeof(struct node));
    struct node *temp2 = head;
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    while(temp2->next != NULL){
         temp2 = temp2->next;
    }
    temp2->next = temp;
    temp->prev = temp2;
    return head;
}

struct node *InsertAtBeg(struct node *head, int data){
    /**********  Here we are trying to create node and insert in the Begining of list also update link parts  **********/
    struct node *temp = malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;

    temp->next = head;
    head->prev = temp;
    head = temp;
    return head;
}

struct node *InsertAtPose(struct node *head, int data, int pose){
    /**********  Here we are trying to create node and insert in the specific position of list also update link parts  **********/
    struct node *temp = malloc(sizeof(struct node));
    struct node *temp2 = head;
    struct node *temp3 = NULL;
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    
    while(pose != 1){
        temp2 = temp2->next;
        pose--;
    }
    temp3 = temp2->next;
    temp2->next = temp;
    temp3->prev = temp;
    temp->next = temp3;
    temp->prev = temp2;
    return head;
}

struct node *delfirst(struct node *head){
    /**********  Here we are trying to delete first node of list also update link parts  **********/
    struct node *temp = head;

    head = head->next;
    head->prev = NULL;
    free(temp);
    temp = NULL;
    return head;
}

struct node *dellast(struct node *head){
    /**********  Here we are trying to delete first node of list also update link parts  **********/
    struct node *temp = head;
    struct node *temp2;
    
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    temp2 = temp->next;
    temp->next = NULL;
    free(temp2);
    temp2 = NULL;
    return head;
}

struct node *delInter(struct node *head, int pose){
    /**********  Here we are trying to delete first node of list also update link parts  **********/
    struct node *temp = head;
    struct node *temp2;
    
    while(pose != 1){
        temp = temp->next;
        pose--;
    }
    temp2 = temp->next;
    temp2->next->prev = temp;
    temp->next = temp2->next;
    free(temp2);
    temp2 = NULL;
    return head;
}

int main(){
    int count = 0;
    struct node * head;
    struct node * ptr; 
    head = addToEmpty(head);
    head = InsertToEnd(head, 43);
    head = InsertAtBeg(head, 51);
    head = InsertAtPose(head, 34, 2);
    head = InsertAtPose(head, 55, 1);
    head = InsertAtPose(head, 64, 3);
    ptr = head;
    printf("Before deleting DLL \n");
    while(ptr != NULL){
        printf("%d \n", ptr->data);
        count++;
        ptr = ptr->next;
    }
    head = delfirst(head);
    head = dellast(head);
    head = delInter(head, 2);

    /**********  Here we are trying to print data and also counting element of list  **********/
    ptr = head;
    printf("After deleting DLL \n");
    while(ptr != NULL){
        printf("%d \n", ptr->data);
        count++;
        ptr = ptr->next;
    }
    printf("%d", count);


    return 0;
}