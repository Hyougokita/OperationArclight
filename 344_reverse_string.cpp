#include <stdio.h>
#include <conio.h>
#include <Windows.h>

//*******************************************************************************
//* �^�C�g��:		��������t�]����v���O����
//* �v���O������:	344_reverse_string.cpp
//* �쐬��:		    ���@����
//* �쐬��:		    2022/09/28
//* �����N:         https://leetcode.cn/problems/reverse-string/
//********************************************************************************

//�_�u���|�C���^�̍ċA�֐�
void swap(char* a, char* b) {
    //�@���̃|�C���^���E�̃|�C���^���傫���ꍇ�@�I��
    if (a >= b) {
        return;
    }
    //  �ċA�I�Ɍ�������
    else {
        char temp = *a;
        *a = *b;
        *b = temp;
        swap(a + 1, b - 1);
    }
}

//  �������Ȃ��ꍇ�I��
void reverseString(char* s, int sSize) {
    if (sSize == 0) {
        return;
    }
    //�@������Ԃ͓��Ɩ����̌���
    swap(s, (s + sSize) - 1);
}