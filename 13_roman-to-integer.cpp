#include <stdio.h>
#include <conio.h>
#include <Windows.h>

//*******************************************************************************
//* タイトル:		ローマ数字から数字に変換する
//* プログラム名:	13_roman-to-integer.cpp
//* 作成者:		    張　健一
//* 作成日:		    2022/10/18
//* リンク:         https://leetcode.cn/problems/roman-to-integer/
//********************************************************************************

//　数値の変換する
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
    //　前の数値と現在の数値と比較する
    int preNum = getValue(s[0]);
    for (int i = 1; i < length; i++) {
        int curNum = getValue(s[i]);
        //　前の数値が小さいなら　減法
        if (preNum < curNum) {
            result -= preNum;
        }
        //　そうじゃないと加法
        else {
            result += preNum;
        }
        //　前の数値を後ろに一個ずれる
        preNum = curNum;
    }
    //　最後の数値を加算する
    result += preNum;
    return result;
}