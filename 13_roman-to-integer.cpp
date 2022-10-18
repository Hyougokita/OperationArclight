#include <stdio.h>
#include <conio.h>
#include <Windows.h>

//*******************************************************************************
//* �^�C�g��:		���[�}�������琔���ɕϊ�����
//* �v���O������:	13_roman-to-integer.cpp
//* �쐬��:		    ���@����
//* �쐬��:		    2022/10/18
//* �����N:         https://leetcode.cn/problems/roman-to-integer/
//********************************************************************************

//�@���l�̕ϊ�����
int getValue(char s) {
    switch (s) {
    case 'I': return 1;
    case 'V': return 5;
    case 'X': return 10;
    case 'L': return 50;
    case 'C': return 100;
    case 'D': return 500;
    case 'M': return 1000;
    }
    return 0;
}

int romanToInt(char* s) {
    int length = strlen(s);
    int result = 0;
    //�@�O�̐��l�ƌ��݂̐��l�Ɣ�r����
    int preNum = getValue(s[0]);
    for (int i = 1; i < length; i++) {
        int curNum = getValue(s[i]);
        //�@�O�̐��l���������Ȃ�@���@
        if (preNum < curNum) {
            result -= preNum;
        }
        //�@��������Ȃ��Ɖ��@
        else {
            result += preNum;
        }
        //�@�O�̐��l�����Ɉ�����
        preNum = curNum;
    }
    //�@�Ō�̐��l�����Z����
    result += preNum;
    return result;
}