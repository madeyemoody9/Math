#include <stdio.h>
#include <stdlib.h>

unsigned int size, i;

struct node {
    int data;
    struct node *link;
} *front = NULL, *temp = NULL, *rear = NULL;

void display();
void insertbeg(int);
void insertend(int);
void insertpos(int, unsigned int);
void deletebeg();
void deleteend();
void deletepos(unsigned int);
void replace(int, unsigned int);
void sortasc();
void sortdes();
unsigned int search(int);

void main() {
    front = (struct node *) malloc(sizeof(struct node));
    temp = front;
    printf("Size of the singly-linked linear list: ");
    scanf("%u", &size);
    printf("Enter the elements:\n");
    for (i = 0; i < size; ++i) {
        scanf("%d", &(temp->data));
        temp = temp->link;
    }
}
