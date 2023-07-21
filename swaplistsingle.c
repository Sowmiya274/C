#include <stdio.h>
struct node{
    int data;
    struct node *next;
};
struct node *head, *tail = NULL;
void addNode(int data) {
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    if(head == NULL) {
        head = newNode;
        tail = newNode;
    }
    else {
        tail->next = newNode;
        tail = newNode;
    }
}
void swap(int n1, int n2){
    struct node *prevNode1 = NULL, *prevNode2 = NULL, *node1 = head, *node2 = head, *temp = NULL;
    if(head == NULL) {
        return;
    }
    if(n1 == n2)
        return;
    while(node1 != NULL && node1->data != n1){
        prevNode1 = node1;
        node1 = node1->next;
    }
    while(node2 != NULL && node2->data != n2){
        prevNode2 = node2;
        node2 = node2->next;
    }

    if(node1 != NULL && node2 != NULL) {
        if(prevNode1 != NULL)
            prevNode1->next = node2;
        else
            head  = node2;
        if(prevNode2 != NULL)
            prevNode2->next = node1;
        else
            head  = node1;
        temp = node1->next;
        node1->next = node2->next;
        node2->next = temp;
    }
    else{
        printf("Swapping is not possible\n");
    }
}
void display() {
    struct node *current = head;

    if(head == NULL) {
        printf("List is empty\n");
        return;
    }
    while(current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main()
{

    addNode(1);
    addNode(2);
    addNode(3);
    addNode(4);
    addNode(5);

    printf("Original list: \n");
    display();
    swap(2,5);

    printf("List after swapping nodes: \n");
    display();

    return 0;
}
