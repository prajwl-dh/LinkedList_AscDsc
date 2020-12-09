//
//  header.h
//  LinkedList_AscDsc
//
//  Created by Prajwal Dhungana on 12/9/20.
//

#ifndef header_h
#define header_h

//declaring libraries
#include <stdio.h>
#include <stdlib.h>

//declaring struct
struct node{
    int data;
    struct node* next;
};

//declaring functions
void printList(struct node* head);

void bubbleSortAsc(struct node* head);

void bubbleSortDsc(struct node* head);

#endif /* header_h */
