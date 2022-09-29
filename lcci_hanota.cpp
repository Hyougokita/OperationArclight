#include <stdio.h>
#include <conio.h>
#include <Windows.h>


#define MAX_SIZE (14)

struct TOWN {
    int* date;
    int size;
};


//　移動したい皿の数n 
void move(int n, struct TOWN* A, struct TOWN* B, struct TOWN* C) {
    //  皿が一個しかない場合　直接AからCへ移動する(終了条件)
    if (n == 1) {
        C->date[C->size++] = A->date[--A->size];
        return;
    }
    //　再帰的に皿を移動する
    else {
        //　最も下の皿以外Bに移動する
        move(n - 1, A, C, B);
        // 最も大きい皿をCに移動する
        move(1, A, B, C);
        // Bの皿をCに移動する
        move(n - 1, B, A, C);
    }

}

void hanota(int* A, int ASize, int* B, int BSize, int** C, int* CSize) {
    if (ASize <= 0) {
        return;
    }
    struct TOWN X, Y, Z;
    X.date = A;
    X.size = ASize;

    Y.date = (int*)malloc(MAX_SIZE * sizeof(int));
    Y.size = 0;

    Z.date = (int*)malloc(MAX_SIZE * sizeof(int));
    Z.size = 0;

    move(ASize, &X, &Y, &Z);
    *C = Z.date;
    *CSize = Z.size;
}