//
//  source.c
//  LinkedList_AscDsc
//
//  Created by Prajwal Dhungana on 12/9/20.
//

//declaring libraries
#include <stdio.h>
#include <stdlib.h>

//including the header file
#include "header.h"

void bubbleSortAsc(struct node* head)
{
    struct node *i , *j;
    int swapper;

    for (i = head; i !=NULL; i=i->next)
    {
        for (j = i->next; j!=NULL; j=j->next)
        {
            if (i->data > j->data)
            {
                swapper = i->data;
                i->data = j->data;
                j->data = swapper;
            }
        }
        
    }
    
}

void bubbleSortDsc(struct node* head)
{
    struct node *i , *j;
    int swapper;

    for (i = head; i !=NULL; i=i->next)
    {
        for (j = i->next; j!=NULL; j=j->next)
        {
            if (i->data < j->data)
            {
                swapper = i->data;
                i->data = j->data;
                j->data = swapper;
            }
        }
        
    }
    
}

void printList(struct node* head)
{
    while (head != NULL)
    {
        printf(" %d", head->data);
        head = head->next;
    }
    printf("\n\n");
}

