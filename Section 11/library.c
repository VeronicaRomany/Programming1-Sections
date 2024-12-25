#include "library.h"

#include <stdio.h>

#include <string.h>
#include <malloc.h>

typedef struct node{
    int data;
    struct node *next;
}node;

node* createNode(int data){
    node *newNode = (node*)malloc(sizeof(node));
    if(newNode == NULL){
        printf("Memory allocation failed\n");
        return NULL;
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

node* insert(int value , node* head){
    if (head == NULL){ // new node first node first value
        head = createNode(value);
        return head;
    }

    node* tail = head; // find last node
    while (tail->next != NULL){ // not the last one
        tail = tail->next;
    }

    tail->next = createNode(value);
    return head;
}

void printList(node* head){
    while (head){
        printf("%d\n",head->data);
        head=head->next;
    }
}

int main(){

    // Memset Examples
    int n=5;
    int arr[n];
    memset(arr, '5', n*sizeof(arr[0]));
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    float arr2[n];
    memset(arr2, 0, n*sizeof(arr2[0]));
    for(int i=0; i<n; i++){
        printf("%f ", arr2[i]);
    }

    char str[100]="Geeks for geeks, hello Csed 2028";
    memset(str, 'hsdg' , 10);
    printf("\n%s\n", str);


    // insert and print linked list
    node* node1 = createNode(5);
    node* node2 = createNode(15);
    node* node3 = createNode(20);

    node1->next = node2;
    node2->next = node3;
    printList(node1);

    // extra insert (out of the scope)
    node* head = insert(1,NULL);
    insert(2,head);
    insert(3,head);
    printList(head);
    return 0;
}
