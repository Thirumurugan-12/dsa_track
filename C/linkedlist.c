#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;
};

struct Node *head = NULL;

void insert(int data) {
  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
  newNode->data = data;
  newNode->next = head;
  head = newNode;
}


void delete(int data) {
  struct Node *prev = (struct Node *)malloc(sizeof(struct Node));
  struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
  temp = head;
  prev = head;
  while (temp->next!=NULL) {
    if (temp->data==data) {
      prev->next = temp->next;
      fflush(temp);
    }
    prev = temp;
    temp = temp->next;
  }
}

void print() {
  struct Node *temp = head;
  int count = 0;
  while (temp != NULL) {
    printf("%d ", temp->data);
    temp = temp->next;
    count++;
  }
  printf("Count of elements %d \n",count);
  printf("\n");
}

int main() {
  insert(1);
  insert(2);
  insert(3);
  delete(2);
  printf(" ");
  print();

  return 0;
}