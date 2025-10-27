#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;
};

struct Node *createNode(int data) {
  struct Node *newNode = malloc(sizeof(*newNode));
  newNode->data = data;
  newNode->next = NULL;
  return newNode;
}

void append(struct Node **head, int data) {
  struct Node *m = *head;
  if (*head == NULL) {
    *head = createNode(data);
  }

  while (m->next != NULL) {
    m = m->next;
  }
  m->next = createNode(data);
}

void traverse(struct Node *head) {
  struct Node *m = head;
  while (m) {
    printf("%d", m->data);
    m = m->next;
  }
  printf("\n");
}
