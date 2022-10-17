#include <stdio.h>
#include <conio.h>
#include <Windows.h>

//*******************************************************************************
//* �^�C�g��:		�O����ǂ�ł���납��ǂ�ł������������ǂ����𔻒f����
//* �v���O������:	09_palindrome-number.cpp
//* �쐬��:		    ���@����
//* �쐬��:		    2022/10/17
//* �����N:         https://leetcode.cn/problems/palindrome-number/
//********************************************************************************

bool isPalindrome(int x) {
    //�@�����Ȃ��Ή񕶐�����Ȃ�
    if (x < 0) {
        return false;
    }
    //�@�͈͂�2^-31<x<x^31�Ȃ̂�
    char a[11];
    //�@���l���當����ɕϊ�����
    sprintf(a, "%d", x);
    //�@�_�u���|�C���^�Ŕ�r����
    int slow = 0, fast = strlen(a) - 1;
    while (slow < fast) {
        if (a[slow] != a[fast]) {
            return false;
        }
        slow++;
        fast--;
    }
    return true;
}