#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE first, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn -> next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn -> next = *first;
        *first = newn;
    }
}

void Display(PNODE first)
{
    PNODE temp = NULL;

    temp = first;

    while(temp != NULL)
    {
        printf("| %d | ->",temp->data);
        temp = temp -> next;
    }

    printf("NULL\n");
}

int SearchFirstOcc(PNODE first, int no)
{
    int iCount = 0;
    PNODE temp = NULL;          // TAREGE
    //PNODE current = NULL;

    temp = first;

    while(temp != NULL)
    {
        if(temp -> data == no)
        {
            temp = temp -> next;
            iCount++;
        }
        
        
            
    }
    return iCount;
}

int main()
{
    PNODE head = NULL;
    int iRet = 0,iValue = 0;

    InsertFirst(&head,11);
    InsertFirst(&head,21);
    InsertFirst(&head,51);
    InsertFirst(&head,11);
    InsertFirst(&head,21);
    InsertFirst(&head,51);

    Display(head);

    iValue = 51;

    iRet = SearchFirstOcc(head,iValue);

    if (iRet != -1)
    {
        printf("First occurrence of %d is at position %d\n",iValue, iRet);
    }
    else
    {
        printf("%d not found in the list\n", iValue);
    }

    return 0;
}