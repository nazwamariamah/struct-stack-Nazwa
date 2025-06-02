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

void Pop(Stack *S, idBuku *x) {
    if (Empty(S))
        cout << "Rak buku kosong! Tidak ada buku yang bisa diambil." << endl;
    else {
        --(S->Count);
        *x = S->Buku[S->Count];
        cout << "Buku dengan ID " << *x << " berhasil diambil dari rak." << endl;
    }
}

void Push(idBuku x, Stack *S) {
    if (Full(S))
        cout << "Rak buku penuh! Tidak bisa menambahkan buku lagi!" << endl;
    else {
        S->Buku[S->Count] = x;
        cout << "Buku dengan ID " << x << " berhasil ditambahkan ke rak." << endl;
        ++(S->Count);
    }
}

int main() {
    Stack RakBuku;
    idBuku *B = RakBuku.Buku;

    initializeStack(&RakBuku);

    Pop(&RakBuku, B);           
    Push(101, &RakBuku);        
    Push(202, &RakBuku);        
    Push(303, &RakBuku);        
    Push(404, &RakBuku);        
    Pop(&RakBuku, B);           

    Push(505, &RakBuku);        
    Push(606, &RakBuku);        
    Push(707, &RakBuku);        
    Push(808, &RakBuku);        
    Push(909, &RakBuku);        
    Push(1000, &RakBuku);       
    Push(1200, &RakBuku);       

    Pop(&RakBuku, B);          
    Push(1111, &RakBuku);       

};