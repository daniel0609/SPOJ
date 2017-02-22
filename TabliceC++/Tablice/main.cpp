#include<stdio.h>

typedef struct _Node
{
    int value;
    struct _Node* next;
}Node;
typedef struct _List
{
    Node* first;
}List;

void addNode(int value1)
{
    Node* newOne = malloc(sizeof(Node));
    newOne->value=value1;
    newOne->next=0;
    if(List->first == 0)
        List->first = newOne;
}


int main(void)
{
    List->first=0;
    return 0;
}
