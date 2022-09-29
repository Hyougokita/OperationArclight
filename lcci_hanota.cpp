#include <stdio.h>
#include <conio.h>
#include <Windows.h>


#define MAX_SIZE (14)

struct TOWN {
    int* date;
    int size;
};


//�@�ړ��������M�̐�n 
void move(int n, struct TOWN* A, struct TOWN* B, struct TOWN* C) {
    //  �M��������Ȃ��ꍇ�@����A����C�ֈړ�����(�I������)
    if (n == 1) {
        C->date[C->size++] = A->date[--A->size];
        return;
    }
    //�@�ċA�I�ɎM���ړ�����
    else {
        //�@�ł����̎M�ȊOB�Ɉړ�����
        move(n - 1, A, C, B);
        // �ł��傫���M��C�Ɉړ�����
        move(1, A, B, C);
        // B�̎M��C�Ɉړ�����
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