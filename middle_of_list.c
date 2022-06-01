#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
int find_len(){
    int count = 0;
    node *last_node = head;
    while(last_node != NULL){
        count += 1;
        last_node = last_node->next;
    }
    return count;
}
int search(int pos)
{
    node *last_node = head;
    int i = 0;
    while (i<pos)
    {
        last_node = last_node->next;
        i++;
    }
    return last_node->data;
}
void main(void){
    insert(7);
    insert(5);
    insert(8);
    insert(9);
    insert(3);
    printf("The list is: ");
    printList();
    int len = find_len();
    printf("\nlength of the list is: %i",len);
    int half = len/2;
    half = ceil(half);
    int data = search(half);
    printf("\nThe middle of the list is: %i", data);
    
}