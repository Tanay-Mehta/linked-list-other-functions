#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}
node;

node *head = NULL;

void printList(){
    node *last_node = head;
    while(last_node != NULL)
        {
            printf("%i", last_node->data);
            last_node = last_node->next;
        }
}
void insert(int value){
    node *temp = (node*)malloc(sizeof(node));
    temp->data = value;
    temp->next = head;
    head = temp;
}

int check_for_same_int(int value){
    int count = 0;
    node *temp = head;
    while (temp != NULL){
        if (temp->data == value){
            count++;
        }
        temp = temp->next;
    }
    return count;
}

void main(void){
    insert(5);
    insert(5);
    insert(8);
    insert(5);
    printf("The list is: ");
    printList();
    int count = check_for_same_int(5);
    printf("\n The count of 5: %i", count);
    
}