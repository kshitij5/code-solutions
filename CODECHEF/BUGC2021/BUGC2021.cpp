#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

int count(struct Node* head){
    int c =0;
    while(head!=NULL){
        head = head->next;
        c++;
    }
    return c;
}

void add(struct Node** header, int datum){
    //allocation
    struct Node* point = (struct Node*) malloc(sizeof(struct Node));
    //data insertion
    point->data = datum;
    //next of new node as head
    point->next = (*header);
    //move head to new node
    (*header) = point;
}
int main(){
    struct Node* head = NULL;

    add(&head, 1);
    add(&head, 3);
    add(&head, 1);
    add(&head, 2);
    add(&head, 1);

    printf("Count of nodes is %d", count(head));
return 0;
}