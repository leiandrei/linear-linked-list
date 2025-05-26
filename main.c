#include<stdio.h>
#include<stdlib.h>

// simple implementation of linear linked lists

struct node
{
  int data;
  struct node *next;
};

int main() {

  struct node *head, *middle, *last;

  head = malloc(sizeof(struct node));
  middle = malloc(sizeof(struct node));
  last = malloc(sizeof(struct node));

  if (!head) {
    perror("Memory Allocation Failed");
    return 1;
  }

  head -> data = 100;
  middle -> data = 200;
  last -> data = 300;

  head -> next = middle;
  middle -> next = last;
  last -> next = NULL;

  struct node *temp = head;

  printf("Data: ");
  while (temp != NULL) 
  {
      printf("%d ", temp -> data);
      temp = temp -> next;
  }
  printf("null");
  // Outputs -> Data: 100 200 300 null
  free(head);
  free(middle);
  free(last);
  
  return 0;
}

