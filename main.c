#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *next;
};

/* Initialize nodes */
struct node *head;
struct node *one = NULL;
struct node *two = NULL;
struct node *three = NULL;
