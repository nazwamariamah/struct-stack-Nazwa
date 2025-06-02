#include <iostream>
using namespace std;

const int MAXSTACK = 10;
typedef int idBuku;

typedef struct {
    idBuku Buku[MAXSTACK];
    int Count;
} Stack;

void initializeStack(Stack *S) {
    S->Count = 0;
}

int Full(Stack *S) {
    return (S->Count == MAXSTACK);
}

int Empty(Stack *S) {
    return (S->Count == 0);
}