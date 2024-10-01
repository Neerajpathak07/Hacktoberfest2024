#include <stdio.h>
#include <stdlib.h>

struct Node{
    int Data;
    struct Node*Next;
    
    
};

void LinkedListTraversal(struct Node* ptr){
    while (ptr!=NULL)
    {
        
    
    
    printf("Element :%d\n",ptr->Data);
    ptr=ptr->Next;
    }
}

int main(int argc, char const *argv[])
{
    struct Node*Head;
    struct Node*Second;
    struct Node*Third;
    struct Node*Fourth;
    
    //Allocate Memory for nodes in Linked List in Heap
    Head=(struct Node*)malloc(sizeof(struct Node));
    Second=(struct Node*)malloc(sizeof(struct Node));
    Third=(struct Node*)malloc(sizeof(struct Node));
    Fourth =(struct Node*)malloc(sizeof(struct Node));
    
    //Link frist and Second Node
    Head->Data=7;
    Head->Next=Second;

    Second->Data=12;
    Second->Next=Third;

    Third->Data=73;
    Third->Next=Third;

    Fourth->Data=94;
    Fourth->Next=NULL;
    
    LinkedListTraversal(Head);

    return 0;
}
