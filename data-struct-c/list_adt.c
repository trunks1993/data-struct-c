#include <stdio.h>
#include "list.h"

struct Node
{
    ElementType Element;
    Position Next;
};

int IsEmpty(List L)
{
    return L->Next == NULL;
}

int isLast(Position P, List L)
{
    return P->Next == NULL;
}

Position Find(ElementType X, List L)
{
    Position P;

    P = L->Next;
    while (P != NULL && P->Element != X)
    {
        P = P->Next;
    }
    return P;
}

void Delete(ElementType X, List L)
{
    Position P;
    P = L->Next;
    while (P != NULL && P->Element != X)
    {
        P = P->Next;
    }
}

Position FindPrevious(ElementType X, List L)
{
    Position P = L;
    P = L->Next;
    while (P->Next && P->Next->Element != X)
        P = P->Next;
    return P;
}

// void Insert(ElementType X, List L, Position P);
// void DeleteList(List L);
// Position Header(List L);
// Position First(List L);
// Position Advance(Position P);
// ElementType Retrieve(Position P);

int main(void)
{
    printf("123");
    return 0;
}
