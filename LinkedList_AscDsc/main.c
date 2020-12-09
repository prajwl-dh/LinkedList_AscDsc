//
//  main.c
//  LinkedList_AscDsc
//
//  Created by Prajwal Dhungana on 12/9/20.
//

//declaring libraries
#include <stdio.h>
#include <stdlib.h>

//Including the header file
#include "header.h"

//beginning of main
int main(int argc, const char * argv[])
{
    
    //declaring some important variables
    int choice = 0;
    int n = 0; //for number of nodes

    struct node* head;
    struct node* current;
    struct node* temp;
    
    //beginning of while infinite loop
    while (1)
    {
        
        //User Choice Selection Part
        printf("*********************************************\n");
        printf(" Welcome to Bubble Sorting Using Linked List \n");
        printf("*********************************************\n");
        printf("Please select your choice: \n");
        printf("1. Bubble Sorting in Ascending Order\n");
        printf("2. Bubble Sorting in Descending Order\n");
        printf("3. Close the program.\n");
        printf("*********************************************\n");
        printf("Please enter your choice: ");
        scanf(" %d", &choice);
        
        //Using switch-case for user input
        switch (choice) {
            case 1:
            {
                //Ascending Order Part
                printf("How many nodes do you want to create: ");
                scanf(" %d", &n);

                for (int i = 0; i < n; i++)
                {
                    current = (struct node*)malloc(sizeof(struct node));

                    printf("Enter the element %d :",i+1);
                    scanf(" %d", &current->data);

                    if(i == 0)
                    {
                        head = temp = current;
                    }
                    else
                    {
                        temp->next = current;
                        temp = current;
                    }
                    
                }
                
                //calling bubble sort to arrange the data in ascending order
                bubbleSortAsc(head);
                
                //printing the linked list
                printf("\n Arranged in Ascending order: \n");
                printList(head);
                printf("\n");
                
                break;
            }
                
            case 2:
            {
                //Descending Order Part
                printf("How many nodes do you want to create: ");
                scanf(" %d", &n);

                for (int i = 0; i < n; i++)
                {
                    current = (struct node*)malloc(sizeof(struct node));

                    printf("Enter the element %d :",i+1);
                    scanf(" %d", &current->data);

                    if(i == 0)
                    {
                        head = temp = current;
                    }
                    else
                    {
                        temp->next = current;
                        temp = current;
                    }
                    
                }
                
                //calling bubble sort to arrange the data in descending order
                bubbleSortDsc(head);
                
                //printing the linked list
                printf("\n Arranged in Descending order: \n");
                printList(head);
                printf("\n");
                
                break;
            }
                
            case 3:
            {
                //Exit the program
                printf("\nThanks for using the program.\n");
                printf("Program closed successfully.\n");
                return EXIT_SUCCESS;
            }
                
            default:
            {
                //Error Checking for user input
                printf("\nYou entered a wrong option.\n");
                printf("Please try again.\n");
                break;
            }
                
        }//end switch
    }
    //end of while infinite loop
    
    return 0;
}
//end of main
