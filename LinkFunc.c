#include <stdio.h>
#include <stdlib.h>

typedef struct node
    {
        int number;
        struct node *next;
    } node;

void link(node** head,int num);
void readlink(node *head);

int main()
{
    node *head = NULL;
    for (int i = 0; i < 10; i++)
    {
        int num = 0;
        printf("Number : ");
        scanf("%d",&num);
        link(&head,num);
    }

    readlink(head);
}

void link(node** head,int num)
{    
    node *n = malloc(sizeof(node));
    n->number = num;
    n->next = *head;

    *head = n;
}

void readlink(node *head)
{
    while (head != NULL)
    {
        printf("%d\t",head->number);
        head = head->next;
    }
}